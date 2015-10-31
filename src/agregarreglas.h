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


#ifndef AGREGARREGLAS_H
#define AGREGARREGLAS_H

#include <QWidget>

namespace Ui {
class AgregarReglas;
}

class AgregarReglas : public QWidget
{
    Q_OBJECT
    
public:
    explicit AgregarReglas(QWidget *parent = 0);
    ~AgregarReglas();
    

private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_checkBox_toggled(bool checked);


signals:

    void refrescartabla();


private:

    Ui::AgregarReglas *ui;
};

#endif // AGREGARREGLAS_H
