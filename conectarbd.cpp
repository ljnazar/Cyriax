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
