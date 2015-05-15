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


#include "mostrarreglas.h"
#include "ui_mostrarreglas.h"
#include "agregarreglas.h"
#include "agregarreglaweb.h"
#include "eliminarreglas.h"

#include<QtSql>
#include<QDebug>
#include<QMessageBox>


MostrarReglas::MostrarReglas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MostrarReglas)
{
    ui->setupUi(this);

    mostrarTabla();


}



MostrarReglas::~MostrarReglas()
{
    delete ui;
}


void MostrarReglas::mostrarTabla()
{

    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("regla");
    model->select();

    model->setHeaderData(0, Qt::Horizontal, trUtf8("ID"));
    model->setHeaderData(1, Qt::Horizontal, trUtf8("Interfaz"));
    model->setHeaderData(2, Qt::Horizontal, trUtf8("Entrada/Salida"));
    model->setHeaderData(3, Qt::Horizontal, trUtf8("IP origen"));
    model->setHeaderData(4, Qt::Horizontal, trUtf8("IP destino"));
    model->setHeaderData(5, Qt::Horizontal, trUtf8("Protocolo"));
    model->setHeaderData(6, Qt::Horizontal, trUtf8("Puerto origen"));
    model->setHeaderData(7, Qt::Horizontal, trUtf8("Puerto destino"));
    model->setHeaderData(8, Qt::Horizontal, trUtf8("String"));
    model->setHeaderData(9, Qt::Horizontal, trUtf8("Tiempo inicio"));
    model->setHeaderData(10, Qt::Horizontal, trUtf8("Tiempo fin"));
    model->setHeaderData(11, Qt::Horizontal, trUtf8("Acción"));

    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->hide();
    ui->tableView->setEditTriggers(0);


}


void MostrarReglas::on_pushButton_clicked()
{
    AgregarReglas *agregarreglas=new AgregarReglas();
    agregarreglas->show();

    // Cuando se emite la señal se ejecuta la función mostrartabla

    connect(agregarreglas, SIGNAL(refrescartabla()), this, SLOT(mostrarTabla()));


}


void MostrarReglas::on_pushButton_2_clicked()
{
    EliminarReglas *eliminarreglas = new EliminarReglas();
    eliminarreglas->show();

    // Cuando se emite la señal se ejecuta la función mostrartabla

    connect(eliminarreglas, SIGNAL(refrescartabla()), this, SLOT(mostrarTabla()));

}


void MostrarReglas::on_pushButton_3_clicked()
{
    AgregarReglaWeb *agregarreglaweb=new AgregarReglaWeb();
    agregarreglaweb->show();

    // Cuando se emite la señal se ejecuta la función mostrartabla

    connect(agregarreglaweb, SIGNAL(refrescartabla()), this, SLOT(mostrarTabla()));
}


void MostrarReglas::on_pushButton_4_clicked()
{
    close();
}


