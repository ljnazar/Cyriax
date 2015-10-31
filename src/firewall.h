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


#ifndef FIREWALL_H
#define FIREWALL_H

#include "conf.h"
#include "confbd.h"

#include <QWidget>
#include <QFileSystemWatcher>


namespace Ui {

class Firewall;

}

class Firewall : public QWidget
{
    Q_OBJECT
    
public:


    explicit Firewall(QWidget *parent = 0);
    ~Firewall();


private slots:


    void on_pushButton_toggled(bool checked);
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void registro_log();
    void registro_estado();
    void registro_pkt();
    void select_log();
    void on_comboBox_currentIndexChanged(const QString);


signals:

    void stoptime();


private:

    QFileSystemWatcher *fileWatcher_log;

    Conf *conf;

    confBD *confbd;

    Ui::Firewall *ui;
};


#endif // FIREWALL_H
