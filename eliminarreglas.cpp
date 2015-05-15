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


#include "eliminarreglas.h"
#include "ui_eliminarreglas.h"
#include "mostrarreglas.h"

#include<QtSql>
#include<QDebug>
#include<QMessageBox>


EliminarReglas::EliminarReglas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EliminarReglas)
{
    ui->setupUi(this);
}

EliminarReglas::~EliminarReglas()
{
    delete ui;
}

void EliminarReglas::on_pushButton_clicked()
{

        QSqlQuery query;


        // Eliminar el registro dependiendo del número de ID


        // Eliminar de la base de datos MySQL

        query.prepare("DELETE FROM regla WHERE id=:id");

        QString str = ui->lineEdit->text();
        std::string aux = str.toStdString();
        char cadena[100];
        strcpy(cadena, aux.c_str());
        query.bindValue(":id", cadena);

        query.exec();


        // Eliminar del script

        system("./Script_regla");

        char sys[50];
        sprintf(sys,"sed '/`# id= %s`/d' ./regla_pre > ./regla_aux",cadena);
        system(sys);
        system("cat ./regla_aux > ./regla_pre");
        system("cat ./regla_pre >> ./regla");


        // Cuando se emite la señal se ejecuta la función mostrartabla

        emit refrescartabla();


        // Cerrar ventana

        close();
}

void EliminarReglas::on_pushButton_2_clicked()
{
    close();
}
