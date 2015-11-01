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


#include "confbd.h"
#include "ui_confbd.h"
#include "mostrarreglas.h"

#include<QtSql>
#include<QDebug>
#include<QMessageBox>
#include<QSettings>


confBD::confBD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confBD)
{
    ui->setupUi(this);

    ui->lineEdit->setReadOnly(1);
    ui->lineEdit_5->setReadOnly(1);

    // Para cargar la posición de la ventana

    QSettings settings;
    restoreGeometry(settings.value("mainWindowGeometry").toByteArray());


}

confBD::~confBD()
{
    delete mostrarreglas;
    delete ui;
}

void confBD::on_pushButton_clicked()
{

    // Conexión con la base de datos

    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");


    // Datos necesarios para la conexión

    QString str1 = ui->lineEdit_2->text();
    std::string h1 = str1.toStdString();
    char r1[50];
    strcpy(r1, h1.c_str());

    QString str2 = ui->lineEdit_3->text();
    std::string h2 = str2.toStdString();
    char r2[50];
    strcpy(r2, h2.c_str());

    QString str3 = ui->lineEdit_4->text();
    std::string h3 = str3.toStdString();
    char r3[50];
    strcpy(r3, h3.c_str());


    db.setHostName(r1);
    db.setUserName(r2);
    db.setPassword(r3);


    // Abrimos la conexión

    if(!db.open())
        {

        // Si no se logra conectar

        QMessageBox::critical(0,"Database Error",db.lastError().text());

        }

    else
        {

        // Si se logra conectar

        // Crea una base de datos llamada Cyriax si no está creada

        QSqlQuery query;
        query.exec("CREATE DATABASE Cyriax");

        // Crear la tabla "regla"


        query.exec("use Cyriax");
        query.exec("CREATE TABLE regla (ID mediumint(8) unsigned not null, Interfaz varchar(10), E_S varchar(10), IP_origen varchar(30), IP_destino varchar(30), Protocolo varchar(10), Puerto_origen varchar(30), Puerto_destino varchar(30), String varchar(50), Tiempo_inicio time, Tiempo_fin time, Acción varchar(10))");


        // Abre la ventana "mostrarreglas"

        mostrarreglas = new MostrarReglas();
        mostrarreglas->show();


        close();

        }

}


void confBD::closeEvent()
{

    // Para guardar la posición de la ventana

    QSettings settings;
    settings.setValue("mainWindowGeometry", saveGeometry());


}


void confBD::on_pushButton_2_clicked()
{

    close();
}


