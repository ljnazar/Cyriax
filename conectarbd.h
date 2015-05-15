#ifndef CONECTARBD_H
#define CONECTARBD_H

#include <QWidget>

namespace Ui {
class conectarbd;
}

class conectarbd : public QWidget
{
    Q_OBJECT
    
public:
    explicit conectarbd(QWidget *parent = 0);
    ~conectarbd();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::conectarbd *ui;
};

#endif // CONECTARBD_H
