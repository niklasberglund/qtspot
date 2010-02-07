#include <QtGui/QApplication>
#include "mainwindow.h"
#include "scapplication.h"

int main(int argc, char *argv[])
{
	SCApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
