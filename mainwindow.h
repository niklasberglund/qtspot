#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "scwidget.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
	SCWidget *leftWidget;
	QWidget *mainWidget;
	QWidget *bottomWidget;
};

#endif // MAINWINDOW_H
