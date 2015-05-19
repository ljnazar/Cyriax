/********************************************************************************
** Form generated from reading UI file 'mostrarreglas.ui'
**
** Created: Fri May 15 02:10:46 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARREGLAS_H
#define UI_MOSTRARREGLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MostrarReglas
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QWidget *MostrarReglas)
    {
        if (MostrarReglas->objectName().isEmpty())
            MostrarReglas->setObjectName(QString::fromUtf8("MostrarReglas"));
        MostrarReglas->resize(1228, 432);
        MostrarReglas->setMinimumSize(QSize(1228, 432));
        MostrarReglas->setMaximumSize(QSize(1228, 1200));
        gridLayout_2 = new QGridLayout(MostrarReglas);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton = new QPushButton(MostrarReglas);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Cantarell"));
        font.setPointSize(10);
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(MostrarReglas);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(MostrarReglas);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout_2->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton_4 = new QPushButton(MostrarReglas);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);

        gridLayout_2->addWidget(pushButton_4, 1, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(MostrarReglas);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 4);


        retranslateUi(MostrarReglas);

        QMetaObject::connectSlotsByName(MostrarReglas);
    } // setupUi

    void retranslateUi(QWidget *MostrarReglas)
    {
        MostrarReglas->setWindowTitle(QApplication::translate("MostrarReglas", "Reglas cargadas", 0));
        pushButton->setText(QApplication::translate("MostrarReglas", "AGREGAR REGLA [modo avanzado]", 0));
        pushButton_3->setText(QApplication::translate("MostrarReglas", "AGREGAR REGLA [Sitio Web]", 0));
        pushButton_2->setText(QApplication::translate("MostrarReglas", "ELIMINAR REGLA", 0));
        pushButton_4->setText(QApplication::translate("MostrarReglas", "SALIR", 0));
    } // retranslateUi

};

namespace Ui {
    class MostrarReglas: public Ui_MostrarReglas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARREGLAS_H
