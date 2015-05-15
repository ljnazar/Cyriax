#ifndef ELIMINARREGLA_H
#define ELIMINARREGLA_H

#include <QWidget>

namespace Ui {
class eliminarregla;
}

class eliminarregla : public QWidget
{
    Q_OBJECT
    
public:
    explicit eliminarregla(QWidget *parent = 0);
    ~eliminarregla();
    
private:
    Ui::eliminarregla *ui;
};

#endif // ELIMINARREGLA_H
