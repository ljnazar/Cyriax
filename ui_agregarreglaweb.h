/********************************************************************************
** Form generated from reading UI file 'agregarreglaweb.ui'
**
** Created: Fri May 15 02:10:46 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARREGLAWEB_H
#define UI_AGREGARREGLAWEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AgregarReglaWeb
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout;
    QTimeEdit *timeEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QTimeEdit *timeEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *AgregarReglaWeb)
    {
        if (AgregarReglaWeb->objectName().isEmpty())
            AgregarReglaWeb->setObjectName(QString::fromUtf8("AgregarReglaWeb"));
        AgregarReglaWeb->resize(380, 288);
        AgregarReglaWeb->setMinimumSize(QSize(380, 288));
        AgregarReglaWeb->setMaximumSize(QSize(380, 288));
        gridLayout_3 = new QGridLayout(AgregarReglaWeb);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton = new QPushButton(AgregarReglaWeb);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Cantarell"));
        font.setPointSize(11);
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(AgregarReglaWeb);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        timeEdit = new QTimeEdit(AgregarReglaWeb);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setMinimumSize(QSize(60, 24));
        timeEdit->setMaximumSize(QSize(60, 24));

        gridLayout->addWidget(timeEdit, 2, 1, 1, 1);

        label_2 = new QLabel(AgregarReglaWeb);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(180, 24));
        label_2->setMaximumSize(QSize(180, 24));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBox = new QComboBox(AgregarReglaWeb);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(92, 24));
        comboBox->setMaximumSize(QSize(92, 24));

        gridLayout->addWidget(comboBox, 4, 1, 1, 1);

        label_3 = new QLabel(AgregarReglaWeb);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        timeEdit_2 = new QTimeEdit(AgregarReglaWeb);
        timeEdit_2->setObjectName(QString::fromUtf8("timeEdit_2"));
        timeEdit_2->setMinimumSize(QSize(60, 24));
        timeEdit_2->setMaximumSize(QSize(60, 24));

        gridLayout->addWidget(timeEdit_2, 3, 1, 1, 1);

        label_4 = new QLabel(AgregarReglaWeb);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(AgregarReglaWeb);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(AgregarReglaWeb);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_7 = new QLabel(AgregarReglaWeb);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        lineEdit_3 = new QLineEdit(AgregarReglaWeb);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(25, 24));
        lineEdit_3->setMaximumSize(QSize(25, 24));

        gridLayout->addWidget(lineEdit_3, 5, 1, 1, 1);

        checkBox = new QCheckBox(AgregarReglaWeb);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 2, 2, 2, 1);

        lineEdit = new QLineEdit(AgregarReglaWeb);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);

        lineEdit_2 = new QLineEdit(AgregarReglaWeb);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 2);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        label = new QLabel(AgregarReglaWeb);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 30));
        label->setMaximumSize(QSize(200, 30));
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 0, 1, 1);


        retranslateUi(AgregarReglaWeb);

        QMetaObject::connectSlotsByName(AgregarReglaWeb);
    } // setupUi

    void retranslateUi(QWidget *AgregarReglaWeb)
    {
        AgregarReglaWeb->setWindowTitle(QApplication::translate("AgregarReglaWeb", "Agregar regla manualmente", 0));
        pushButton->setText(QApplication::translate("AgregarReglaWeb", "GUARDAR REGLA", 0));
        pushButton_2->setText(QApplication::translate("AgregarReglaWeb", "CANCELAR", 0));
        label_2->setText(QApplication::translate("AgregarReglaWeb", "Sitio Web", 0));
        label_3->setText(QApplication::translate("AgregarReglaWeb", "Texto/Palabra/C\303\263digo", 0));
        label_4->setText(QApplication::translate("AgregarReglaWeb", "Tiempo de inicio", 0));
        label_5->setText(QApplication::translate("AgregarReglaWeb", "Tiempo de finalizaci\303\263n", 0));
        label_6->setText(QApplication::translate("AgregarReglaWeb", "Acci\303\263n", 0));
        label_7->setText(QApplication::translate("AgregarReglaWeb", "ID", 0));
        checkBox->setText(QApplication::translate("AgregarReglaWeb", "Habilitar", 0));
        lineEdit->setText(QString());
        label->setText(QApplication::translate("AgregarReglaWeb", "REGLA DE FILTRADO", 0));
    } // retranslateUi

};

namespace Ui {
    class AgregarReglaWeb: public Ui_AgregarReglaWeb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARREGLAWEB_H
