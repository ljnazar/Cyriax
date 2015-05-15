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


#include<QtSql>
#include<QDebug>
#include<QMessageBox>

#include "conectarbd.h"
#include "ui_conectarbd.h"

#include "mostrarreglas.h"


conectarbd::conectarbd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::conectarbd)
{
    ui->setupUi(this);
}

conectarbd::~conectarbd()
{
    delete ui;
}


void conectarbd::on_pushButton_clicked()
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
    db.setDatabaseName("firewall");

    // Abrimos la conexión

    if(!db.open())
        {

        // Si no se logra conectar

        QMessageBox::critical(0,"Database Error",db.lastError().text());

        }

    else
        {

        // Si se logra conectar

        MostrarReglas *mostrarreglas=new MostrarReglas();
        mostrarreglas->show();

        }



}
