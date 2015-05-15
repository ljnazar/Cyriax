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


#include "conf.h"
#include "ui_conf.h"

#include <QString>
#include <iostream>
#include <stdio.h>
#include <QDebug>
#include <QStringList>
#include <QSettings>
#include <QFile>


Conf::Conf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Conf)
{
    ui->setupUi(this);


    ui->checkBox_13->setEnabled(0);
    ui->checkBox_14->setEnabled(0);
    ui->checkBox_15->setEnabled(0);


    // Para cargar la posición de la ventana

    QSettings settings;
    restoreGeometry(settings.value("mainWindowGeometry").toByteArray());



    // Para cargar el contenido de la ventana

    loadwindows();


}


Conf::~Conf()
{   
    delete ui;
}




void Conf::loadwindows()
{

QFile *file1 = new QFile(this);

file1->setFileName("config_resguardo");

file1->open(QFile::ReadOnly);

QString strFile(file1->readAll());

QStringList lista;

lista = strFile.split(",");

file1->close();


QString r1 = lista[0];
ui->lineEdit->setText(r1);

QString r2 = lista[1];
ui->lineEdit_3->setText(r2);

QString r3 = lista[2];
ui->lineEdit_2->setText(r3);



QString s1 = lista[3];
int x1 = s1.toInt();
ui->checkBox_3->setChecked(x1);


QString s2 = lista[4];
int x2 = s2.toInt();
ui->checkBox->setChecked(x2);


QString s3 = lista[5];
int x3 = s3.toInt();
ui->checkBox_2->setChecked(x3);


QString s4 = lista[6];
int x4 = s4.toInt();
ui->checkBox_4->setChecked(x4);


QString s5 = lista[7];
int x5 = s5.toInt();
ui->checkBox_5->setChecked(x5);


QString s6 = lista[8];
int x6 = s6.toInt();
ui->checkBox_6->setChecked(x6);


QString s7 = lista[9];
int x7 = s7.toInt();
ui->checkBox_13->setChecked(x7);


QString s8 = lista[10];
int x8 = s8.toInt();
ui->checkBox_14->setChecked(x8);


QString s9 = lista[11];
int x9 = s9.toInt();
ui->checkBox_15->setChecked(x9);


QString s10 = lista[12];
int x10 = s10.toInt();
ui->checkBox_7->setChecked(x10);


QString s11 = lista[13];
int x11 = s11.toInt();
ui->checkBox_8->setChecked(x11);


QString s12 = lista[14];
int x12 = s12.toInt();
ui->checkBox_9->setChecked(x12);


QString s13 = lista[15];
int x13 = s13.toInt();
ui->checkBox_10->setChecked(x13);


QString s14 = lista[16];
int x14 = s14.toInt();
ui->checkBox_11->setChecked(x14);


QString s15 = lista[17];
int x15 = s15.toInt();
ui->checkBox_12->setChecked(x15);


}


void Conf::on_pushButton_clicked()
{

    system("./Script_config");


    // Guarda el contenido de lineEdit


    system("echo '# IP WEB SERVER\n' >> ./config");

    QString str = ui->lineEdit->text();
    std::string a = str.toStdString();

    char r[50];

    strcpy(r, a.c_str());

    char cadena[50];

    sprintf(cadena,"echo 'IPWS=\"%s\"\n' >> ./config",r);

    system(cadena);


    // Guarda el contenido de lineEdit_3


    system("echo '# INTERFAZ DE ENTRADA\n' >> ./config");

    QString str3 = ui->lineEdit_3->text();
    std::string a3 = str3.toStdString();

    char r3[50];

    strcpy(r3, a3.c_str());

    char cadena3[50];

    sprintf(cadena3,"echo 'IFACE_Nro1=\"%s\"\n' >> ./config",r3);

    system(cadena3);


    // Guarda el contenido de lineEdit_2


    system("echo '# INTERFAZ DE SALIDA\n' >> ./config");

    QString str2 = ui->lineEdit_2->text();
    std::string a2 = str2.toStdString();

    char r2[50];

    strcpy(r2, a2.c_str());

    char cadena2[50];

    sprintf(cadena2,"echo 'IFACE_Nro2=\"%s\"\n' >> ./config",r2);

    system(cadena2);



    // Crea una lista para guardar el contenido de la ventana

    QStringList lista;
    lista << r << r3 << r2;



    // Guarda el contenido de los checkBox


    system("echo '\n# Módulos de iptables\n\n' >> ./config");


    if(ui->checkBox_3->isChecked()==1)
    {

        system("cat ./Scripts_iptables/Pqt_inv >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }

    if(ui->checkBox->isChecked()==1)
    {

        system("cat ./Scripts_iptables/ICMP_Flooding >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }


    if(ui->checkBox_2->isChecked()==1)
    {

        system("cat ./Scripts_iptables/ICMP_Redirect >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }


    if(ui->checkBox_4->isChecked()==1)
    {
        system("cat ./Scripts_iptables/TCP_SYN_Err >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }


    if(ui->checkBox_5->isChecked()==1)
    {
        system("cat ./Scripts_iptables/TCP_Flooding >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }


    if(ui->checkBox_6->isChecked()==1)
    {

        lista << "1";


        if((ui->checkBox_13->isChecked()==1)&(ui->checkBox_14->isChecked()==0)&(ui->checkBox_15->isChecked()==0))
        {
            system("cat ./Scripts_iptables/Conex_Ent_Except_22 >> ./config");
            system("echo '\n\n' >> ./config");

            lista << "1";
            lista << "0";
            lista << "0";

        }

        if((ui->checkBox_13->isChecked()==0)&(ui->checkBox_14->isChecked()==1)&(ui->checkBox_15->isChecked()==0))
        {

            system("cat ./Scripts_iptables/Conex_Ent_Except_80 >> ./config");
            system("echo '\n\n' >> ./config");

            lista << "0";
            lista << "1";
            lista << "0";

        }

        if((ui->checkBox_13->isChecked()==0)&(ui->checkBox_14->isChecked()==0)&(ui->checkBox_15->isChecked()==1))
        {

            system("cat ./Scripts_iptables/Conex_Ent_Except_443 >> ./config");
            system("echo '\n\n' >> ./config");

            lista << "0";
            lista << "0";
            lista << "1";

        }

        if((ui->checkBox_13->isChecked()==1)&(ui->checkBox_14->isChecked()==1)&(ui->checkBox_15->isChecked()==0))
        {
            system("cat ./Scripts_iptables/Conex_Ent_Except_22_80 >> ./config");
            system("echo '\n\n' >> ./config");

            lista << "1";
            lista << "1";
            lista << "0";

        }

        if((ui->checkBox_13->isChecked()==1)&(ui->checkBox_14->isChecked()==1)&(ui->checkBox_15->isChecked()==1))
        {
            system("cat ./Scripts_iptables/Conex_Ent_Except_22_80_443 >> ./config");
            system("echo '\n\n' >> ./config");

            lista << "1";
            lista << "1";
            lista << "1";

        }

        if((ui->checkBox_13->isChecked()==1)&(ui->checkBox_14->isChecked()==0)&(ui->checkBox_15->isChecked()==1))
        {
            system("cat ./Scripts_iptables/Conex_Ent_Except_22_443 >> ./config");
            system("echo '\n\n' >> ./config");

            lista << "1";
            lista << "0";
            lista << "1";

        }

        if((ui->checkBox_13->isChecked()==0)&(ui->checkBox_14->isChecked()==1)&(ui->checkBox_15->isChecked()==1))
        {
            system("cat ./Scripts_iptables/Conex_Ent_Except_80_443 >> ./config");
            system("echo '\n\n' >> ./config");

            lista << "0";
            lista << "1";
            lista << "1";

        }

        if((ui->checkBox_13->isChecked()==0)&(ui->checkBox_14->isChecked()==0)&(ui->checkBox_15->isChecked()==0))
        {

            system("cat ./Scripts_iptables/Conex_Ent >> ./config");
            system("echo '\n\n' >> ./config");

            lista << "0";
            lista << "0";
            lista << "0";

        }


    }
    else
    {
        lista << "0";
        lista << "0";
        lista << "0";
        lista << "0";
    }


    if(ui->checkBox_7->isChecked()==1)
    {
        system("cat ./Scripts_iptables/Conex_Sal >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }

    if(ui->checkBox_8->isChecked()==1)
    {
        system("cat ./Scripts_iptables/TCP_flags_inv >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }

    if(ui->checkBox_9->isChecked()==1)
    {
        system("cat ./Scripts_iptables/UDP_Flooding >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }

    if(ui->checkBox_10->isChecked()==1)
    {
        system("cat ./Scripts_iptables/UDP_Ent >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }

    if(ui->checkBox_11->isChecked()==1)
    {
        system("cat ./Scripts_iptables/UDP_Sal >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }

    if(ui->checkBox_12->isChecked()==1)
    {
        system("cat ./Scripts_iptables/SSH_Brute_Force >> ./config");
        system("echo '\n\n' >> ./config");

        lista << "1";

    }
    else
    {
        lista << "0";
    }



    // Para guardar el contenido de la lista en un archivo

    QString strlist = lista.join(",");
    std::string aux = strlist.toStdString();

    char f[300];

    strcpy(f, aux.c_str());

    QFile *file2 = new QFile(this);

    file2->setFileName("config_resguardo");

    file2->open(QFile::WriteOnly);

    file2->QFile::write(f);

    file2->close();


    close();

}



void Conf::on_pushButton_2_clicked()
{

    close();

}


void Conf::closeEvent()
{

    // Para guardar la posición de la ventana

    QSettings settings;
    settings.setValue("mainWindowGeometry", saveGeometry());


}

void Conf::on_checkBox_6_toggled(bool checked)
{

        ui->checkBox_13->setEnabled(checked);
        ui->checkBox_14->setEnabled(checked);
        ui->checkBox_15->setEnabled(checked);

}

