/********************************************************************************
** Form generated from reading UI file 'confbd.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFBD_H
#define UI_CONFBD_H

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

class Ui_confBD
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *confBD)
    {
        if (confBD->objectName().isEmpty())
            confBD->setObjectName(QStringLiteral("confBD"));
        confBD->resize(282, 244);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(confBD->sizePolicy().hasHeightForWidth());
        confBD->setSizePolicy(sizePolicy);
        confBD->setMinimumSize(QSize(282, 244));
        confBD->setMaximumSize(QSize(282, 244));
        confBD->setBaseSize(QSize(0, 0));
        gridLayout = new QGridLayout(confBD);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit_5 = new QLineEdit(confBD);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 6, 2, 1, 1);

        lineEdit_4 = new QLineEdit(confBD);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setAutoFillBackground(true);
        lineEdit_4->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_4, 5, 2, 1, 1);

        lineEdit_2 = new QLineEdit(confBD);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setAutoFillBackground(true);

        gridLayout->addWidget(lineEdit_2, 3, 2, 1, 1);

        label_2 = new QLabel(confBD);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Cantarell"));
        font.setPointSize(11);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(confBD);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_6 = new QLabel(confBD);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        pushButton = new QPushButton(confBD);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(115, 30));
        pushButton->setMaximumSize(QSize(115, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Cantarell"));
        font1.setPointSize(10);
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 8, 0, 1, 1);

        lineEdit = new QLineEdit(confBD);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setAutoFillBackground(false);

        gridLayout->addWidget(lineEdit, 2, 2, 1, 1);

        label_4 = new QLabel(confBD);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        lineEdit_3 = new QLineEdit(confBD);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setAutoFillBackground(true);

        gridLayout->addWidget(lineEdit_3, 4, 2, 1, 1);

        pushButton_2 = new QPushButton(confBD);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(115, 30));
        pushButton_2->setMaximumSize(QSize(115, 30));
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 8, 2, 1, 1);

        label = new QLabel(confBD);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        label_5 = new QLabel(confBD);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 1, 1, 1);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(confBD);

        QMetaObject::connectSlotsByName(confBD);
    } // setupUi

    void retranslateUi(QWidget *confBD)
    {
        confBD->setWindowTitle(QApplication::translate("confBD", "Conexi\303\263n con la BD", 0));
        lineEdit_5->setText(QApplication::translate("confBD", "         Cyriax", 0));
        lineEdit_2->setText(QString());
        label_2->setText(QApplication::translate("confBD", "Driver", 0));
        label_3->setText(QApplication::translate("confBD", "Host Name", 0));
        label_6->setText(QApplication::translate("confBD", "Database Name", 0));
        pushButton->setText(QApplication::translate("confBD", "ACEPTAR", 0));
        lineEdit->setText(QApplication::translate("confBD", "        MYSQL", 0));
        label_4->setText(QApplication::translate("confBD", "User Name", 0));
        pushButton_2->setText(QApplication::translate("confBD", "CANCELAR", 0));
        label->setText(QApplication::translate("confBD", "PARAMETROS DE LA BASE DE DATOS", 0));
        label_5->setText(QApplication::translate("confBD", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class confBD: public Ui_confBD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFBD_H
