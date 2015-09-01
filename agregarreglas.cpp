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


#include "agregarreglas.h"
#include "ui_agregarreglas.h"
#include "mostrarreglas.h"

#include<QtSql>
#include<QDebug>
#include<QMessageBox>
#include<QTime>


AgregarReglas::AgregarReglas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AgregarReglas)
{
    ui->setupUi(this);


    const QString arg0="Entrada";
    ui->comboBox->addItem(arg0);

    const QString arg1="Salida";
    ui->comboBox->addItem(arg1);

    const QString arg2="Descartar";
    ui->comboBox_2->addItem(arg2);

    const QString arg3="Aceptar";
    ui->comboBox_2->addItem(arg3);

    ui->timeEdit->setEnabled(0);
    ui->timeEdit_2->setEnabled(0);


}


AgregarReglas::~AgregarReglas()
{
    delete ui;
}


void AgregarReglas::on_pushButton_clicked()
{

        QSqlQuery query;


        // Insertar valores en la tabla

        query.prepare("INSERT INTO regla (ID, Interfaz, E_S, IP_origen, IP_destino, Protocolo, Puerto_origen, Puerto_destino, String, Tiempo_inicio, Tiempo_fin, Acción) VALUES (:id, :iface, :es, :ipo, :ipd, :proto, :Porto, :Portd, :string, :timeinicio, :timefin, :act)");


        system("./Script_regla");


        QString str8 = ui->lineEdit_8->text();
        if(str8.isEmpty()==false)
        {
            std::string aux8 = str8.toStdString();
            char cadena8[100];
            strcpy(cadena8, aux8.c_str());
            query.bindValue(":id", cadena8);
            char sys8[50];
            sprintf(sys8,"echo -n '\n`# id= %s`' >> ./regla_pre",cadena8);
            system(sys8);
        }
        if(str8=="0")
        {

            QMessageBox::critical(0,"Error","Se necesita un ID mayor a cero");

        }
        if(str8.isEmpty()==true)
        {

            // Es necesario identificar una regla sin ID para poder eliminarla del script (sinó podria generar un error)
            // Este ID va a ser cero

            system("echo -n '\n`# id=0`' >> ./regla_pre");

            QMessageBox::critical(0,"Error","Se necesita el ID de la regla");

         }


        system("echo -n ' $iptables -A $CADENA' >> ./regla_pre");


        QString str1 = ui->lineEdit->text();
        std::string aux1 = str1.toStdString();
        char cadena1[100];
        strcpy(cadena1, aux1.c_str());
        query.bindValue(":iface", cadena1);
        if(str1.isEmpty()==false)
        { 
            if(ui->comboBox->currentText()=="Entrada")
            {
                query.bindValue(":es", "entrada");

                char sys1[50];
                sprintf(sys1,"echo -n ' -i %s' >> ./regla_pre",cadena1);
                system(sys1);
            }

            if(ui->comboBox->currentText()=="Salida")
            {
                query.bindValue(":es", "salida");

                char sys1[50];
                sprintf(sys1,"echo -n ' -o %s' >> ./regla_pre",cadena1);
                system(sys1);
            }
        }


        QString str2 = ui->lineEdit_2->text();
        std::string aux2 = str2.toStdString();
        char cadena2[100];
        strcpy(cadena2, aux2.c_str());
        query.bindValue(":ipo", cadena2);
        if(str2.isEmpty()==false)
        {
            char sys2[50];
            sprintf(sys2,"echo -n ' -s %s' >> ./regla_pre",cadena2);
            system(sys2);
        }


        QString str3 = ui->lineEdit_3->text();
        std::string aux3 = str3.toStdString();
        char cadena3[100];
        strcpy(cadena3, aux3.c_str());
        query.bindValue(":ipd", cadena3);
        if(str3.isEmpty()==false)
        {
            char sys3[50];
            sprintf(sys3,"echo -n ' -d %s' >> ./regla_pre",cadena3);
            system(sys3);
        }


        QString str4 = ui->lineEdit_4->text();
        std::string aux4 = str4.toStdString();
        char cadena4[100];
        strcpy(cadena4, aux4.c_str());
        query.bindValue(":proto", cadena4);
        if(str4.isEmpty()==false)
        {
            char sys4[50];
            sprintf(sys4,"echo -n ' -p %s' >> ./regla_pre",cadena4);
            system(sys4);
        }


        QString str5 = ui->lineEdit_5->text();
        std::string aux5 = str5.toStdString();
        char cadena5[100];
        strcpy(cadena5, aux5.c_str());
        query.bindValue(":Porto", cadena5);
        if(str5.isEmpty()==false)
        {
            char sys5[50];
            sprintf(sys5,"echo -n ' --sport %s' >> ./regla_pre",cadena5);
            system(sys5);
        }


        QString str6 = ui->lineEdit_6->text();
        std::string aux6 = str6.toStdString();
        char cadena6[100];
        strcpy(cadena6, aux6.c_str());
        query.bindValue(":Portd", cadena6);
        if(str6.isEmpty()==false)
        {
            char sys6[50];
            sprintf(sys6,"echo -n ' --dport %s' >> ./regla_pre",cadena6);
            system(sys6);
        }


        QString str7 = ui->lineEdit_7->text();
        std::string aux7 = str7.toStdString();
        char cadena7[100];
        strcpy(cadena7, aux7.c_str());
        query.bindValue(":string", cadena7);
        if(str7.isEmpty()==false)
        {
            char sys7[50];
            sprintf(sys7,"echo -n ' -m string --string \"%s\" --algo kmp' >> ./regla_pre",cadena7);
            system(sys7);
        }



        if(ui->timeEdit->isEnabled()==true)
        {

            QString str9 = ui->timeEdit->text();
            std::string aux9 = str9.toStdString();

            // Es necesario pasar la hora a UTC ya que iptables toma esa hora como referencia (para la argentina se suman 3 horas)

            QTime time1 = ui->timeEdit->time().addSecs(3600*3);

            std::string timeaux1 = time1.toString("hh:mm:ss").toStdString();

            char cadena9[100];
            strcpy(cadena9, aux9.c_str());
            char timeaux2[100];
            strcpy(timeaux2, timeaux1.c_str());
            query.bindValue(":timeinicio", cadena9);
            if(str9.isEmpty()==false)
            {
                char sys9[50];
                sprintf(sys9,"echo -n ' -m time --timestart %s' >> ./regla_pre", timeaux2);
                system(sys9);
            }
        }


        if(ui->timeEdit_2->isEnabled()==true)
        {

            QString str10 = ui->timeEdit_2->text();
            std::string aux10 = str10.toStdString();

            // Es necesario pasar la hora a UTC ya que iptables toma esa hora como referencia (para la argentina se suman 3 horas)

            QTime time2 = ui->timeEdit_2->time().addSecs(3600*3);

            std::string timeaux3 = time2.toString("hh:mm:ss").toStdString();

            char cadena10[100];
            strcpy(cadena10, aux10.c_str());
            char timeaux4[100];
            strcpy(timeaux4, timeaux3.c_str());
            query.bindValue(":timefin", cadena10);
            if(str10.isEmpty()==false)
            {
                char sys10[50];
                sprintf(sys10,"echo -n ' --timestop %s' >> ./regla_pre",timeaux4);
                system(sys10);
            }

        }

        if(ui->comboBox_2->currentText()=="Aceptar")
        {
         query.bindValue(":act", "aceptar");

         char cadena11[100]="ACCEPT";
         char sys11[50];
         sprintf(sys11,"echo -n ' -j %s\n' >> ./regla_pre",cadena11);
         system(sys11);
        }

        if(ui->comboBox_2->currentText()=="Descartar")
        {
         query.bindValue(":act", "descartar");

         char cadena11[100]="DROP";
         char sys11[50];
         sprintf(sys11,"echo -n ' -j %s\n' >> ./regla_pre",cadena11);
         system(sys11);
        }


        // Limpiar variable query
        query.exec();


        // Elimina regla con ID igual a cero

        // Eliminar de la base de datos
        query.exec("DELETE FROM regla WHERE id=0");
        // Limpiar variable query
        query.exec();

        // Eliminar del script
        system("sed '/`# id= 0`/d' ./regla_pre > ./regla_aux");
        system("cat ./regla_aux > ./regla_pre");


        // Acomodar numéricamente los registros en orden ascendente
        query.exec("ALTER TABLE regla ORDER BY id ASC");
        // Limpiar variable query
        query.exec();



        // Eliminar reglones en blanco

        system("sed '/^$/d' ./regla_pre > ./regla_aux");
        system("cat ./regla_aux > ./regla_pre");


        // Ordenar numéricamente las reglas de iptables

        system("sort -k3 -n ./regla_pre >> ./regla");


        // Cuando se emite la señal se ejecuta la función mostrartabla

        emit refrescartabla();



        // Cerrar ventana

        close();


}


void AgregarReglas::on_pushButton_2_clicked()
{
    close();    

}



void AgregarReglas::on_checkBox_toggled(bool checked)
{

        ui->timeEdit->setEnabled(checked);
        ui->timeEdit_2->setEnabled(checked);

}

