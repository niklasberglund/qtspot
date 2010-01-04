#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sctabwidget.h"
#include <QTimeEdit>
#include "scwidget.h"
#include "sctabwidget.h"
#include <QGridLayout>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent), ui(new Ui::MainWindow)
{
	// QMainWindow(parent), ui(new Ui::MainWindow)
	ui->setupUi(this);

	// main window settings
	this->setMinimumSize(800,600);
	this->setWindowTitle("Spotify");

	// set up main widget
	this->setCentralWidget(new SCWidget(this));

	// set up widgets
	//SCWidget *testWidget = new SCWidget(this);
	//testWidget->setMinimumSize(300,300);
	//testWidget->setFixedSize(200,200);
	//testWidget->setGeometry(70,70,300,300);
	//testWidget->resize(300,300);
	//testWidget->show();

	// set up tab widget
	/*SCTabWidget *tabWidget = new SCTabWidget(this);
	tabWidget->show();
	tabWidget->setMinimumSize(400,300);
	tabWidget->setTabShape(QTabWidget::Triangular);

	// add tabs
	tabWidget->addTab(new QTimeEdit(), "time edit");
	tabWidget->addTab(new QDateTimeEdit, "date time edit");
	*/
}

MainWindow::~MainWindow()
{
	//delete ui;
}
