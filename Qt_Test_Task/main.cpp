#include "Qt_Test_Task.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qt_Test_Task w;
    w.show();
    return a.exec();
}
