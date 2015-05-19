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


#include "firewall.h"
#include "ui_firewall.h"
#include "conf.h"
#include "mostrarreglas.h"
#include "confbd.h"

#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFile>
#include <QFileDialog>



Firewall::Firewall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Firewall)
{
    ui->setupUi(this);

    ///////////////////////////////////////////////////////////////////////////////

    const QString arg0="Mostrar registro completo";
    ui->comboBox->addItem(arg0);

    const QString arg1="Montrar paquetes ICMP echo-request";
    ui->comboBox->addItem(arg1);

    const QString arg2="Montrar paquetes ICMP timestamp-request";
    ui->comboBox->addItem(arg2);

    const QString arg3="Montrar paquetes ICMP redirect";
    ui->comboBox->addItem(arg3);

    const QString arg4="Montrar Paquetes invalidos";
    ui->comboBox->addItem(arg4);

    const QString arg5="Montrar paquetes TCP SYN Erroneos";
    ui->comboBox->addItem(arg5);

    const QString arg6="Montrar paquetes de conexión entrantes TCP";
    ui->comboBox->addItem(arg6);

    const QString arg7="Montrar paquetes de conexión salientes TCP";
    ui->comboBox->addItem(arg7);

    const QString arg8="Montrar paquetes UDP entrantes";
    ui->comboBox->addItem(arg8);

    const QString arg9="Montrar paquetes UDP salientes";
    ui->comboBox->addItem(arg9);

    //////////////////////////////////////////////////////////////////////////////////


    ui->pushButton_5->setEnabled(1);
    ui->pushButton_6->setEnabled(1);
    ui->plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->textEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->plainTextEdit->setPlainText(0);

}


Firewall::~Firewall()
{
    delete conf;
    delete confbd;
    delete ui;
}



void Firewall::on_pushButton_toggled(bool checked)
{
    if(checked==true)
    {
        ui->pushButton->setFont(QFont("cantarell",10,QFont::Bold));
        ui->pushButton->setText("DESACTIVAR");

        // Mostrar Imagen de activado
        ///////////////
        QGraphicsScene *scene1 = new QGraphicsScene(this);
        ui->graphicsView->setScene(scene1);
        QBrush greenBrush(Qt::green);
        QPen outlinePen(Qt::black);
        outlinePen.setWidth(3);
        scene1->addRect(0, 0, 12, 12, outlinePen, greenBrush);
        //////////////


        // Cargar configuración y reglas agregadas

        system("./config");
        system("./regla");



        ui->pushButton_3->setEnabled(0);
        ui->pushButton_4->setEnabled(0);
        ui->comboBox->setEnabled(1);
        ui->plainTextEdit->setPlainText(0);



        QFile *file = new QFile(this);
        file->setFileName("iptables.log.aux");
        file->open(QFile::ReadOnly);
        QString strFile(file->readAll());
        ui->plainTextEdit->appendPlainText(strFile);
        file->close();




        fileWatcher_log = new QFileSystemWatcher(this);
        fileWatcher_log->addPath("/var/log/iptables.log");
        connect(fileWatcher_log, SIGNAL(fileChanged(QString)), this, SLOT(registro_log()));



        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(registro_estado()));
        connect(timer, SIGNAL(timeout()), this, SLOT(registro_pkt()));
        connect(this, SIGNAL(stoptime()), timer, SLOT(stop()));
        timer->start(200); // 200 ms

	registro_log();

    }

    if(checked==false)
    {
        ui->pushButton->setFont(QFont("cantarell",10,QFont::Normal));
        ui->pushButton->setText("ACTIVAR");

        disconnect(fileWatcher_log, SIGNAL(fileChanged(QString)), this, SLOT(registro_log()));
        emit stoptime();


        // Mostrar Imagen de activado
        ///////////////
        QGraphicsScene *scene2 = new QGraphicsScene(this);
        ui->graphicsView->setScene(scene2);
        QBrush redBrush(Qt::red);
        QPen outlinePen(Qt::black);
        outlinePen.setWidth(3);
        scene2->addRect(0, 0, 12, 12, outlinePen, redBrush);
        //////////////


        system("iptables -F");
        system("iptables -X");
        system("iptables -Z");


        ui->comboBox->setEnabled(0);
        ui->pushButton_3->setEnabled(1);
        ui->pushButton_4->setEnabled(1);


    }
}


void Firewall::registro_log()
{

    // REGISTRO DEL LOG


    char sys[300]="diff /var/log/iptables.log ./iptables.log.aux | grep '<' | sed 's/^< //g' > ./iptables.log.aux";
    system(sys);

    select_log();

}


void Firewall::registro_estado()
{

    // REGISTRO DE ESTADO DEL FIREWALL

    system("./Estado_aux/Script");

    QFile *file2 = new QFile(this);
    file2->setFileName("registro_estado");
    file2->open(QFile::ReadOnly);
    QString strFile2(file2->readAll());
    ui->textEdit->setPlainText(strFile2);
    file2->close();

}



void Firewall::registro_pkt()
{

    // REGISTRO DE CONTEO

    system("./Conteo_aux/Script");

    QFile *file3 = new QFile(this);
    file3->setFileName("registro_conteo");
    file3->open(QFile::ReadOnly);
    QString strFile3(file3->readAll());
    ui->textEdit_2->setPlainText(strFile3);
    file3->close();


}


void Firewall::select_log()
{

    // SELECCIONAR PARTE DEL LOG A VISUALIZAR


    QFile *file1 = new QFile(this);


    if(ui->comboBox->currentText()=="Mostrar registro completo")
    {

    ui->plainTextEdit->setPlainText(0);

    file1->setFileName("iptables.log.aux");
    file1->open(QFile::ReadOnly);
    QString strFile(file1->readAll());
    ui->plainTextEdit->appendPlainText(strFile);

    }

    if(ui->comboBox->currentText()=="Montrar paquetes ICMP echo-request")
    {

        ui->plainTextEdit->setPlainText(0);

        system("grep 'echo-request' ./iptables.log.aux > ./registro_bloqueo");

        file1->setFileName("registro_bloqueo");
        file1->open(QFile::ReadOnly);
        QString strFile(file1->readAll());
        ui->plainTextEdit->appendPlainText(strFile);

    }


    if(ui->comboBox->currentText()=="Montrar paquetes ICMP timestamp-request")
    {

        ui->plainTextEdit->setPlainText(0);

        system("grep 'timestamp-request' ./iptables.log.aux > ./registro_bloqueo");

        file1->setFileName("registro_bloqueo");
        file1->open(QFile::ReadOnly);
        QString strFile(file1->readAll());
        ui->plainTextEdit->appendPlainText(strFile);

    }


    if(ui->comboBox->currentText()=="Montrar paquetes ICMP redirect")
    {

        ui->plainTextEdit->setPlainText(0);

        system("grep 'redirect' ./iptables.log.aux > ./registro_bloqueo");

        file1->setFileName("registro_bloqueo");
        file1->open(QFile::ReadOnly);
        QString strFile(file1->readAll());
        ui->plainTextEdit->appendPlainText(strFile);

    }


    if(ui->comboBox->currentText()=="Montrar Paquetes invalidos")
    {

        ui->plainTextEdit->setPlainText(0);

        system("grep 'inválido' ./iptables.log.aux > ./registro_bloqueo");

        file1->setFileName("registro_bloqueo");
        file1->open(QFile::ReadOnly);
        QString strFile(file1->readAll());
        ui->plainTextEdit->appendPlainText(strFile);

    }


    if(ui->comboBox->currentText()=="Montrar paquetes TCP SYN Erroneos")
    {

        ui->plainTextEdit->setPlainText(0);

        system("grep 'Erroneo' ./iptables.log.aux > ./registro_bloqueo");

        file1->setFileName("registro_bloqueo");
        file1->open(QFile::ReadOnly);
        QString strFile(file1->readAll());
        ui->plainTextEdit->appendPlainText(strFile);

    }


    if(ui->comboBox->currentText()=="Montrar paquetes de conexión entrantes TCP")
    {

        ui->plainTextEdit->setPlainText(0);

        system("grep 'TCP - Conexión entrante' ./iptables.log.aux > ./registro_bloqueo");

        file1->setFileName("registro_bloqueo");
        file1->open(QFile::ReadOnly);
        QString strFile(file1->readAll());
        ui->plainTextEdit->appendPlainText(strFile);

    }


    if(ui->comboBox->currentText()=="Montrar paquetes de conexión salientes TCP")
    {

        ui->plainTextEdit->setPlainText(0);

        system("grep 'TCP - Conexión saliente' ./iptables.log.aux > ./registro_bloqueo");

        file1->setFileName("registro_bloqueo");
        file1->open(QFile::ReadOnly);
        QString strFile(file1->readAll());
        ui->plainTextEdit->appendPlainText(strFile);

    }


    if(ui->comboBox->currentText()=="Montrar paquetes UDP entrantes")
    {

        ui->plainTextEdit->setPlainText(0);

        system("grep 'UDP Entrante' ./iptables.log.aux > ./registro_bloqueo");

        file1->setFileName("registro_bloqueo");
        file1->open(QFile::ReadOnly);
        QString strFile(file1->readAll());
        ui->plainTextEdit->appendPlainText(strFile);

    }


    if(ui->comboBox->currentText()=="Montrar paquetes UDP salientes")
    {

        ui->plainTextEdit->setPlainText(0);

        system("grep 'UDP Saliente' ./iptables.log.aux > ./registro_bloqueo");

        file1->setFileName("registro_bloqueo");
        file1->open(QFile::ReadOnly);
        QString strFile(file1->readAll());
        ui->plainTextEdit->appendPlainText(strFile);

    }


    file1->close();


}




void Firewall::on_pushButton_2_clicked()
{

    QMessageBox::about(0,"Acerca de Cyriax","\n                          CYRIAX - versión 1.0.0\n\n               GNU - GENERAL PUBLIC LICENSE V3                      \n\n\nEste programa es un firewall que trabaja en conjunto\ncon Netfilter/iptables. Permite el bloqueo de ataques\nexternos a un ordenador conectado a internet y\ncuenta con características especiales para bloquear\nataques en la capa de aplicación del modelo TCP/IP.\n\n\nAutor: Leandro Jesús Nazar\n\n\n                        Trabajo final de carrera\n                 Ingeniería en telecominicaciones\n                        Universidad Blas Pascal");

}




void Firewall::on_pushButton_3_clicked()
{
    conf = new Conf();
    conf->show();
}


void Firewall::on_pushButton_4_clicked()
{
    confbd = new confBD();
    confbd->show();
}


void Firewall::on_pushButton_5_clicked()
{
    system("cat /dev/null > ./iptables.log.aux");
    system("cat /dev/null > /var/log/iptables.log");
    ui->plainTextEdit->setPlainText(0);


}


void Firewall::on_pushButton_6_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this);
        if(fileName.isEmpty())
        return;
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly|QIODevice::Text))
        {
            file.write(ui->plainTextEdit->toPlainText().toUtf8());
        }

}


void Firewall::on_comboBox_currentIndexChanged(const QString)
{

    select_log();

}

