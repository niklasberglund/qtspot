#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "scwidget.h"
#include "scmastercontroller.h"


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
	SCMasterController *master;
};

#endif // MAINWINDOW_H
