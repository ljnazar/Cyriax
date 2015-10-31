/********************************************************************************
** Form generated from reading UI file 'firewall.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIREWALL_H
#define UI_FIREWALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Firewall
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QComboBox *comboBox;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Firewall)
    {
        if (Firewall->objectName().isEmpty())
            Firewall->setObjectName(QStringLiteral("Firewall"));
        Firewall->setWindowModality(Qt::NonModal);
        Firewall->resize(909, 631);
        QFont font;
        font.setFamily(QStringLiteral("Cantarell"));
        Firewall->setFont(font);
        gridLayout = new QGridLayout(Firewall);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Firewall);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Cantarell"));
        font1.setPointSize(11);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        textEdit = new QTextEdit(Firewall);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMinimumSize(QSize(0, 0));
        textEdit->setMaximumSize(QSize(16777215, 72));
        QFont font2;
        font2.setPointSize(10);
        textEdit->setFont(font2);
        textEdit->setStyleSheet(QStringLiteral(""));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(textEdit, 1, 0, 3, 1);

        textEdit_2 = new QTextEdit(Firewall);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(true);
        sizePolicy.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy);
        textEdit_2->setMinimumSize(QSize(0, 0));
        textEdit_2->setMaximumSize(QSize(16777215, 72));
        QFont font3;
        font3.setPointSize(10);
        font3.setKerning(true);
        textEdit_2->setFont(font3);
        textEdit_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        textEdit_2->setAcceptDrops(true);
        textEdit_2->setFrameShape(QFrame::StyledPanel);
        textEdit_2->setFrameShadow(QFrame::Sunken);
        textEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2->setTabChangesFocus(false);
        textEdit_2->setUndoRedoEnabled(true);
        textEdit_2->setOverwriteMode(false);
        textEdit_2->setTabStopWidth(80);
        textEdit_2->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(textEdit_2, 1, 1, 3, 1);

        pushButton_3 = new QPushButton(Firewall);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setMinimumSize(QSize(124, 30));
        pushButton_3->setMaximumSize(QSize(124, 30));
        QFont font4;
        font4.setFamily(QStringLiteral("Cantarell"));
        font4.setPointSize(10);
        pushButton_3->setFont(font4);

        gridLayout->addWidget(pushButton_3, 1, 5, 1, 1);

        label_2 = new QLabel(Firewall);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(Firewall);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(true);
        QFont font5;
        font5.setPointSize(9);
        plainTextEdit->setFont(font5);
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(plainTextEdit, 5, 0, 1, 6);

        comboBox = new QComboBox(Firewall);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(false);
        comboBox->setFont(font4);

        gridLayout->addWidget(comboBox, 6, 0, 1, 2);

        pushButton_5 = new QPushButton(Firewall);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(true);
        pushButton_5->setFont(font4);

        gridLayout->addWidget(pushButton_5, 6, 2, 1, 2);

        pushButton_6 = new QPushButton(Firewall);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(true);
        pushButton_6->setFont(font4);

        gridLayout->addWidget(pushButton_6, 6, 4, 1, 2);

        pushButton = new QPushButton(Firewall);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        QFont font6;
        font6.setFamily(QStringLiteral("Cantarell"));
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setWeight(50);
        font6.setKerning(true);
        pushButton->setFont(font6);
        pushButton->setText(QStringLiteral("ACTIVAR"));
        pushButton->setCheckable(true);
        pushButton->setDefault(false);

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(Firewall);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setMinimumSize(QSize(124, 30));
        pushButton_4->setMaximumSize(QSize(124, 30));
        pushButton_4->setFont(font4);

        gridLayout->addWidget(pushButton_4, 3, 5, 1, 1);

        graphicsView = new QGraphicsView(Firewall);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(false);
        graphicsView->setMaximumSize(QSize(21, 21));
        graphicsView->setFocusPolicy(Qt::NoFocus);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        graphicsView->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        graphicsView->setForegroundBrush(brush1);

        gridLayout->addWidget(graphicsView, 1, 4, 1, 1);

        pushButton_2 = new QPushButton(Firewall);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setMinimumSize(QSize(122, 30));
        pushButton_2->setMaximumSize(QSize(122, 30));
        pushButton_2->setFont(font4);
        pushButton_2->setCheckable(false);

        gridLayout->addWidget(pushButton_2, 3, 3, 1, 2);

        pushButton_3->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        label->raise();
        textEdit->raise();
        textEdit_2->raise();
        label_2->raise();
        pushButton_6->raise();
        pushButton_5->raise();
        comboBox->raise();
        plainTextEdit->raise();
        graphicsView->raise();
        pushButton->raise();

        retranslateUi(Firewall);

        QMetaObject::connectSlotsByName(Firewall);
    } // setupUi

    void retranslateUi(QWidget *Firewall)
    {
        Firewall->setWindowTitle(QApplication::translate("Firewall", "\\-->  CYRIAX  <--/", 0));
        label->setText(QApplication::translate("Firewall", "ESTADO DEL FIREWALL", 0));
        textEdit->setHtml(QApplication::translate("Firewall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif';\"><br /></p></body></html>", 0));
        textEdit_2->setHtml(QApplication::translate("Firewall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton_3->setText(QApplication::translate("Firewall", "CONFIGURACION", 0));
        label_2->setText(QApplication::translate("Firewall", "REGISTRO DEL FIREWALL", 0));
        pushButton_5->setText(QApplication::translate("Firewall", "LIMPIAR LOG", 0));
        pushButton_6->setText(QApplication::translate("Firewall", "GUARDAR LOG", 0));
        pushButton_4->setText(QApplication::translate("Firewall", "AGREGAR REGLAS", 0));
        pushButton_2->setText(QApplication::translate("Firewall", "ABOUT CYRIAX", 0));
    } // retranslateUi

};

namespace Ui {
    class Firewall: public Ui_Firewall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIREWALL_H
