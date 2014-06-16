#include "madmainform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MadMainForm w;
    w.show();

    return a.exec();
}
