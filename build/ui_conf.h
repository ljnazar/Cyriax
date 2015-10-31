/********************************************************************************
** Form generated from reading UI file 'conf.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONF_H
#define UI_CONF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Conf
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox;
    QLabel *label;
    QGridLayout *gridLayout_7;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_7;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_14;
    QSpacerItem *horizontalSpacer_36;
    QSpacerItem *horizontalSpacer_32;
    QSpacerItem *horizontalSpacer_35;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_9;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLabel *label_5;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Conf)
    {
        if (Conf->objectName().isEmpty())
            Conf->setObjectName(QStringLiteral("Conf"));
        Conf->resize(312, 564);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Conf->sizePolicy().hasHeightForWidth());
        Conf->setSizePolicy(sizePolicy);
        Conf->setMinimumSize(QSize(312, 564));
        Conf->setMaximumSize(QSize(312, 564));
        Conf->setBaseSize(QSize(0, 0));
        gridLayout = new QGridLayout(Conf);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, -1, -1, -1);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        checkBox_3 = new QCheckBox(Conf);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setEnabled(true);
        checkBox_3->setMinimumSize(QSize(286, 18));
        checkBox_3->setMaximumSize(QSize(286, 18));
        QFont font;
        font.setFamily(QStringLiteral("Cantarell"));
        font.setPointSize(11);
        checkBox_3->setFont(font);
        checkBox_3->setMouseTracking(true);
        checkBox_3->setAcceptDrops(false);
        checkBox_3->setAutoFillBackground(false);
        checkBox_3->setInputMethodHints(Qt::ImhNone);
        checkBox_3->setCheckable(true);
        checkBox_3->setChecked(false);
        checkBox_3->setAutoRepeat(false);
        checkBox_3->setAutoExclusive(false);
        checkBox_3->setTristate(false);

        gridLayout_4->addWidget(checkBox_3, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(Conf);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setMinimumSize(QSize(286, 18));
        checkBox_2->setMaximumSize(QSize(286, 18));
        checkBox_2->setFont(font);

        gridLayout_4->addWidget(checkBox_2, 2, 0, 1, 1);

        checkBox_6 = new QCheckBox(Conf);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setMinimumSize(QSize(286, 18));
        checkBox_6->setMaximumSize(QSize(286, 18));
        checkBox_6->setFont(font);

        gridLayout_4->addWidget(checkBox_6, 5, 0, 1, 1);

        checkBox_5 = new QCheckBox(Conf);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setMinimumSize(QSize(286, 18));
        checkBox_5->setMaximumSize(QSize(286, 18));
        checkBox_5->setFont(font);

        gridLayout_4->addWidget(checkBox_5, 4, 0, 1, 1);

        checkBox_4 = new QCheckBox(Conf);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setMinimumSize(QSize(286, 18));
        checkBox_4->setMaximumSize(QSize(286, 18));
        checkBox_4->setFont(font);

        gridLayout_4->addWidget(checkBox_4, 3, 0, 1, 1);

        checkBox = new QCheckBox(Conf);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setMinimumSize(QSize(286, 18));
        checkBox->setMaximumSize(QSize(286, 18));
        checkBox->setFont(font);

        gridLayout_4->addWidget(checkBox, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 8, 0, 1, 2);

        label = new QLabel(Conf);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(288, 21));
        label->setMaximumSize(QSize(288, 21));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        checkBox_12 = new QCheckBox(Conf);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));
        checkBox_12->setMinimumSize(QSize(286, 18));
        checkBox_12->setMaximumSize(QSize(286, 18));
        checkBox_12->setFont(font);

        gridLayout_7->addWidget(checkBox_12, 5, 0, 1, 1);

        checkBox_10 = new QCheckBox(Conf);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        checkBox_10->setMinimumSize(QSize(286, 18));
        checkBox_10->setMaximumSize(QSize(286, 18));
        checkBox_10->setFont(font);

        gridLayout_7->addWidget(checkBox_10, 3, 0, 1, 1);

        checkBox_11 = new QCheckBox(Conf);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));
        checkBox_11->setMinimumSize(QSize(286, 18));
        checkBox_11->setMaximumSize(QSize(286, 18));
        checkBox_11->setFont(font);

        gridLayout_7->addWidget(checkBox_11, 4, 0, 1, 1);

        checkBox_8 = new QCheckBox(Conf);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setMinimumSize(QSize(286, 18));
        checkBox_8->setMaximumSize(QSize(286, 18));
        checkBox_8->setFont(font);

        gridLayout_7->addWidget(checkBox_8, 1, 0, 1, 1);

        checkBox_9 = new QCheckBox(Conf);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setMinimumSize(QSize(286, 18));
        checkBox_9->setMaximumSize(QSize(286, 18));
        checkBox_9->setFont(font);

        gridLayout_7->addWidget(checkBox_9, 2, 0, 1, 1);

        checkBox_7 = new QCheckBox(Conf);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setMinimumSize(QSize(286, 18));
        checkBox_7->setMaximumSize(QSize(286, 18));
        checkBox_7->setFont(font);

        gridLayout_7->addWidget(checkBox_7, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_7, 11, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        checkBox_13 = new QCheckBox(Conf);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));
        checkBox_13->setEnabled(true);
        checkBox_13->setMinimumSize(QSize(216, 18));
        checkBox_13->setMaximumSize(QSize(216, 18));
        checkBox_13->setFont(font);

        gridLayout_2->addWidget(checkBox_13, 0, 1, 1, 1);

        checkBox_15 = new QCheckBox(Conf);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));
        checkBox_15->setEnabled(true);
        checkBox_15->setMinimumSize(QSize(218, 18));
        checkBox_15->setMaximumSize(QSize(218, 18));
        checkBox_15->setFont(font);

        gridLayout_2->addWidget(checkBox_15, 2, 1, 1, 1);

        checkBox_14 = new QCheckBox(Conf);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));
        checkBox_14->setEnabled(true);
        checkBox_14->setMinimumSize(QSize(216, 18));
        checkBox_14->setMaximumSize(QSize(216, 18));
        checkBox_14->setFont(font);

        gridLayout_2->addWidget(checkBox_14, 1, 1, 1, 1);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_36, 0, 2, 1, 1);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_32, 0, 0, 1, 1);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_35, 0, 3, 1, 1);


        gridLayout->addLayout(gridLayout_2, 9, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        lineEdit = new QLineEdit(Conf);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setMinimumSize(QSize(120, 24));
        lineEdit->setMaximumSize(QSize(120, 24));
        lineEdit->setAutoFillBackground(true);

        gridLayout_9->addWidget(lineEdit, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        label_4 = new QLabel(Conf);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(132, 24));
        label_4->setMaximumSize(QSize(132, 24));
        label_4->setFont(font);

        gridLayout_9->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(Conf);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(132, 24));
        label_3->setMaximumSize(QSize(132, 24));
        label_3->setFont(font);

        gridLayout_9->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(Conf);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(50, 24));
        lineEdit_2->setMaximumSize(QSize(50, 24));
        lineEdit_2->setAutoFillBackground(true);

        gridLayout_9->addWidget(lineEdit_2, 3, 4, 1, 1);

        lineEdit_3 = new QLineEdit(Conf);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(50, 24));
        lineEdit_3->setMaximumSize(QSize(50, 24));
        lineEdit_3->setAutoFillBackground(true);

        gridLayout_9->addWidget(lineEdit_3, 1, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        label_2 = new QLabel(Conf);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(132, 24));
        label_2->setMaximumSize(QSize(132, 24));
        label_2->setFont(font);

        gridLayout_9->addWidget(label_2, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_9, 3, 0, 1, 2);

        label_5 = new QLabel(Conf);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(288, 21));
        label_5->setMaximumSize(QSize(288, 21));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        pushButton = new QPushButton(Conf);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(140, 30));
        pushButton->setMaximumSize(QSize(140, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Cantarell"));
        font1.setPointSize(10);
        pushButton->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(Conf);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(140, 30));
        pushButton_2->setMaximumSize(QSize(140, 30));
        pushButton_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_2);


        gridLayout->addLayout(formLayout, 13, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 12, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, checkBox_3);
        QWidget::setTabOrder(checkBox_3, checkBox);
        QWidget::setTabOrder(checkBox, checkBox_2);
        QWidget::setTabOrder(checkBox_2, checkBox_4);
        QWidget::setTabOrder(checkBox_4, checkBox_5);
        QWidget::setTabOrder(checkBox_5, checkBox_6);
        QWidget::setTabOrder(checkBox_6, checkBox_13);
        QWidget::setTabOrder(checkBox_13, checkBox_14);
        QWidget::setTabOrder(checkBox_14, checkBox_15);
        QWidget::setTabOrder(checkBox_15, checkBox_7);
        QWidget::setTabOrder(checkBox_7, checkBox_8);
        QWidget::setTabOrder(checkBox_8, checkBox_9);
        QWidget::setTabOrder(checkBox_9, checkBox_10);
        QWidget::setTabOrder(checkBox_10, checkBox_11);
        QWidget::setTabOrder(checkBox_11, checkBox_12);
        QWidget::setTabOrder(checkBox_12, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Conf);

        QMetaObject::connectSlotsByName(Conf);
    } // setupUi

    void retranslateUi(QWidget *Conf)
    {
        Conf->setWindowTitle(QApplication::translate("Conf", "Configuraci\303\263n", 0));
        checkBox_3->setText(QApplication::translate("Conf", "Paquetes inv\303\241lidos", 0));
        checkBox_2->setText(QApplication::translate("Conf", "ICMP Redirect", 0));
        checkBox_6->setText(QApplication::translate("Conf", "Conexiones entrantes", 0));
        checkBox_5->setText(QApplication::translate("Conf", "TCP Flooding", 0));
        checkBox_4->setText(QApplication::translate("Conf", "TCP_SYN Erroneo", 0));
        checkBox->setText(QApplication::translate("Conf", "ICMP Flooding", 0));
        label->setText(QApplication::translate("Conf", "PARAMETROS DEL FIREWALL", 0));
        checkBox_12->setText(QApplication::translate("Conf", "SSH Brute force", 0));
        checkBox_10->setText(QApplication::translate("Conf", "UDP entrantes", 0));
        checkBox_11->setText(QApplication::translate("Conf", "UDP salientes", 0));
        checkBox_8->setText(QApplication::translate("Conf", "TCP con flags inv\303\241lidos", 0));
        checkBox_9->setText(QApplication::translate("Conf", "UDP Flooding", 0));
        checkBox_7->setText(QApplication::translate("Conf", "Conexiones salientes", 0));
        checkBox_13->setText(QApplication::translate("Conf", "Excepto puerto 22 [SSH]", 0));
        checkBox_15->setText(QApplication::translate("Conf", "Excepto puerto 443 [HTTPS]", 0));
        checkBox_14->setText(QApplication::translate("Conf", "Excepto puerto 80 [HTTP]", 0));
        lineEdit->setText(QString());
        label_4->setText(QApplication::translate("Conf", "Interfaz de salida", 0));
        label_3->setText(QApplication::translate("Conf", "Interfaz de entrada", 0));
        lineEdit_3->setText(QString());
        label_2->setText(QApplication::translate("Conf", "IP del servidor", 0));
        label_5->setText(QApplication::translate("Conf", "BLOQUEAR", 0));
        pushButton->setText(QApplication::translate("Conf", "GRABAR", 0));
        pushButton_2->setText(QApplication::translate("Conf", "CANCELAR", 0));
    } // retranslateUi

};

namespace Ui {
    class Conf: public Ui_Conf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONF_H
