#include "eliminarregla.h"
#include "ui_eliminarregla.h"

eliminarregla::eliminarregla(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::eliminarregla)
{
    ui->setupUi(this);
}

eliminarregla::~eliminarregla()
{
    delete ui;
}
