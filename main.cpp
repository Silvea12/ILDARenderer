#include "mainwindow.h"
#include "ildaserializer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    ILDASerializer::coordinateHeader();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
