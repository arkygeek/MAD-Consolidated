#ifndef MADMAINFORM_H
#define MADMAINFORM_H

#include <QMainWindow>

namespace Ui {
class MadMainForm;
}

class MadMainForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit MadMainForm(QWidget *parent = 0);
    ~MadMainForm();

private:
    Ui::MadMainForm *ui;
};

#endif // MADMAINFORM_H
