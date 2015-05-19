/********************************************************************************
** Form generated from reading UI file 'eliminarreglas.ui'
**
** Created: Fri May 15 02:10:46 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARREGLAS_H
#define UI_ELIMINARREGLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EliminarReglas
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *EliminarReglas)
    {
        if (EliminarReglas->objectName().isEmpty())
            EliminarReglas->setObjectName(QString::fromUtf8("EliminarReglas"));
        EliminarReglas->resize(256, 110);
        EliminarReglas->setMinimumSize(QSize(256, 110));
        EliminarReglas->setMaximumSize(QSize(256, 110));
        gridLayout = new QGridLayout(EliminarReglas);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        lineEdit = new QLineEdit(EliminarReglas);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 0));
        lineEdit->setMaximumSize(QSize(25, 24));

        gridLayout_2->addWidget(lineEdit, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        label = new QLabel(EliminarReglas);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Cantarell"));
        font.setPointSize(11);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton = new QPushButton(EliminarReglas);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cantarell"));
        font1.setPointSize(10);
        pushButton->setFont(font1);

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(EliminarReglas);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        gridLayout_3->addWidget(pushButton_2, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_3, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);


        retranslateUi(EliminarReglas);

        QMetaObject::connectSlotsByName(EliminarReglas);
    } // setupUi

    void retranslateUi(QWidget *EliminarReglas)
    {
        EliminarReglas->setWindowTitle(QApplication::translate("EliminarReglas", "Eliminar regla", 0));
        label->setText(QApplication::translate("EliminarReglas", "Introduzca el n\303\272mero de ID", 0));
        pushButton->setText(QApplication::translate("EliminarReglas", "ELIMINAR", 0));
        pushButton_2->setText(QApplication::translate("EliminarReglas", "CANCELAR", 0));
    } // retranslateUi

};

namespace Ui {
    class EliminarReglas: public Ui_EliminarReglas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARREGLAS_H
