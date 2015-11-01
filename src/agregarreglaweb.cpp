/****************************************************************************
**
** Copyright(C) 2015 Leandro Jesús Nazar [University Blas Pascal].
** All rights reserved.
** Contact: ljnazar@gmail.com
**
** <This file is part of a program named Cyriax. This program is a firewall
** application that works in conjunction with Netfilter/iptables. Cyriax
** allows blocking external attacks to a computer connected to the internet
** and has special features to block attacks from the application layer
** of the TCP/IP model.>
**
** $BEGIN_LICENSE$
**
** Cyriax is free software: you can redistribute it and/or modify it under
** the terms of the GNU General Public License as published by the Free
** Software Foundation, either version 3 of the License, or (at your option)
** any later version.
**
** Cyriax is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
** FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
** details.
**
** You should have received a copy of the GNU General Public License along
** with Cyriax. If not, see <http://www.gnu.org/licenses/>.
**
** $END_LICENSE$
**
****************************************************************************/


#include "agregarreglaweb.h"
#include "ui_agregarreglaweb.h"
#include "mostrarreglas.h"

#include<QtSql>
#include<QDebug>
#include<QMessageBox>
#include<QTime>


AgregarReglaWeb::AgregarReglaWeb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AgregarReglaWeb)
{
    ui->setupUi(this);


    const QString arg1="Descartar";
    ui->comboBox->addItem(arg1);

    const QString arg2="Aceptar";
    ui->comboBox->addItem(arg2);

    ui->timeEdit->setEnabled(0);
    ui->timeEdit_2->setEnabled(0);

}

AgregarReglaWeb::~AgregarReglaWeb()
{
    delete ui;
}

void AgregarReglaWeb::on_pushButton_clicked()
{

    QSqlQuery query;


    // Insertar valores en la tabla

    query.prepare("INSERT INTO regla (ID, IP_destino, String, Tiempo_inicio, Tiempo_fin, Acción) VALUES (:id, :ipd, :string, :timeinicio, :timefin, :act)");


    system("../src/Script_regla");


    QString str7 = ui->lineEdit_3->text();
    if(str7.isEmpty()==false)
    {
        std::string aux7 = str7.toStdString();
        char cadena7[100];
        strcpy(cadena7, aux7.c_str());
        query.bindValue(":id", cadena7);
        char sys7[50];
        sprintf(sys7,"echo -n '\n`# id= %s`' >> ../src/regla_pre",cadena7);
        system(sys7);
    }
    if(str7=="0")
    {

        QMessageBox::critical(0,"Error","Se necesita un ID mayor a cero");

    }
    if(str7.isEmpty()==true)
    {

        // Es necesario identificar una regla sin ID para poder eliminarla del script (sinó podria generar un error)
        // Este ID va a ser cero

        system("echo -n '\n`# id=0`' >> ../src/regla_pre");

        QMessageBox::critical(0,"Error","Se necesita el ID de la regla");

     }


    system("echo -n ' $iptables -A $CADENA' >> ../src/regla_pre");



    QString str1 = ui->lineEdit->text();
    std::string aux1 = str1.toStdString();
    char cadena1[100];
    strcpy(cadena1, aux1.c_str());
    query.bindValue(":ipd", cadena1);
    if(str1.isEmpty()==false)
    {
        char sys1[50];
        sprintf(sys1,"echo -n ' -d %s' >> ../src/regla_pre",cadena1);
        system(sys1);
    }


    QString str2 = ui->lineEdit_2->text();
    std::string aux2 = str2.toStdString();
    char cadena2[100];
    strcpy(cadena2, aux2.c_str());
    query.bindValue(":string", cadena2);
    if(str2.isEmpty()==false)
    {
        char sys2[50];
        sprintf(sys2,"echo -n ' -m string --string \"%s\" --algo kmp' >> ../src/regla_pre",cadena2);
        system(sys2);
    }



    if(ui->timeEdit->isEnabled()==true)
    {

        QString str3 = ui->timeEdit->text();
        std::string aux3 = str3.toStdString();

        // Es necesario pasar la hora a UTC ya que iptables toma esa hora como referencia (para la argentina se suman 3 horas)

        QTime time1 = ui->timeEdit->time().addSecs(3600*3);

        std::string timeaux1 = time1.toString("hh:mm:ss").toStdString();

        char cadena3[100];
        strcpy(cadena3, aux3.c_str());
        char timeaux2[100];
        strcpy(timeaux2, timeaux1.c_str());
        query.bindValue(":timeinicio", cadena3);
        if(str3.isEmpty()==false)
        {
            char sys3[50];
            sprintf(sys3,"echo -n ' -m time --timestart %s' >> ../src/regla_pre", timeaux2);
            system(sys3);
        }
    }


    if(ui->timeEdit_2->isEnabled()==true)
    {

        QString str4 = ui->timeEdit_2->text();
        std::string aux4 = str4.toStdString();

        // Es necesario pasar la hora a UTC ya que iptables toma esa hora como referencia (para la argentina se suman 3 horas)

        QTime time2 = ui->timeEdit_2->time().addSecs(3600*3);

        std::string timeaux3 = time2.toString("hh:mm:ss").toStdString();

        char cadena4[100];
        strcpy(cadena4, aux4.c_str());
        char timeaux4[100];
        strcpy(timeaux4, timeaux3.c_str());
        query.bindValue(":timefin", cadena4);
        if(str4.isEmpty()==false)
        {
            char sys4[50];
            sprintf(sys4,"echo -n ' --timestop %s' >> ../src/regla_pre",timeaux4);
            system(sys4);
        }

    }

    if(ui->comboBox->currentText()=="Aceptar")
    {
     query.bindValue(":act", "aceptar");

     char cadena5[100]="ACCEPT";
     char sys5[50];
     sprintf(sys5,"echo -n ' -j %s\n' >> ../src/regla_pre",cadena5);
     system(sys5);
    }

    if(ui->comboBox->currentText()=="Descartar")
    {
     query.bindValue(":act", "descartar");

     char cadena6[100]="DROP";
     char sys6[50];
     sprintf(sys6,"echo -n ' -j %s\n' >> ../src/regla_pre",cadena6);
     system(sys6);
    }


    // Limpiar variable query

    query.exec();


    // Elimina regla con ID igual a cero

    // Eliminar de la base de datos
    query.exec("DELETE FROM regla WHERE id=0");
    // Limpiar variable query
    query.exec();

    // Eliminar del script
    system("sed '/`# id= 0`/d' ../src/regla_pre > ../src/regla_aux");
    system("cat ../src/regla_aux > ../src/regla_pre");


    // Acomodar numéricamente los registros en orden ascendente
    query.exec("ALTER TABLE regla ORDER BY id ASC");
    // Limpiar variable query
    query.exec();


    // Eliminar reglones en blanco

    system("sed '/^$/d' ../src/regla_pre > ../src/regla_aux");
    system("cat ../src/regla_aux > ../src/regla_pre");


    // Ordenar numéricamente las reglas de iptables

    system("sort -k3 -n ../src/regla_pre >> ../src/regla");



    // Cuando se emite la señal se ejecuta la función mostrartabla

    emit refrescartabla();


    // Cerrar ventana

    close();



}


void AgregarReglaWeb::on_pushButton_2_clicked()
{

        close();

}




void AgregarReglaWeb::on_checkBox_toggled(bool checked)
{

    ui->timeEdit->setEnabled(checked);
    ui->timeEdit_2->setEnabled(checked);

}
