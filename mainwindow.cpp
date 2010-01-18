#include "mainwindow.h"
#include "sctabwidget.h"
#include <QTimeEdit>
#include "scwidget.h"
#include "sctabwidget.h"
#include <QGridLayout>
#include <QLineEdit>
#include "scwidgettop.h"
#include "scmainwindowsplitter.h"
#include "scplaybackwidget.h"
#include <QDebug>
#include "sctableview.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	this->master = new SCMaster();
	// QMainWindow(parent), ui(new Ui::MainWindow)
	//ui->setupUi(this);

	// main window settings
	this->setMinimumSize(600,400);
	this->setWindowTitle("Spotify");

	// set up main widget
	//SCMainWindowSplitter *mainWindowSplitter = new SCMainWindowSplitter();
	//this->setCentralWidget(mainWindowSplitter);

	// set up the left widget
	SCWidget *leftWidget = new SCWidget();
	leftWidget->setWidget(new SCTableView());

	// set up the widgets to be put into the layout
	this->master->setLeftWidget(new SCWidget());
	this->master->getLeftWidget()->setWidget(new SCTableView());
	this->master->setMainWidget(new SCTabWidget());
	this->master->setBottomWidget(new SCPlaybackWidget());

	this->master->getLeftWidget()->setMaximumWidth(150);
	this->master->getLeftWidget()->setMinimumWidth(150);
	this->master->getBottomWidget()->setMaximumHeight(41);
	this->master->getBottomWidget()->setMinimumHeight(41);

	// set up splitters
	QSplitter *mainVerticalSplitter = new QSplitter(); // splits the main window in 2 - upper parts and playback widget
	QSplitter *subHorizontalSplitter = new QSplitter(); // splits the upper part horizontally

	// add widgets to the splitters
	subHorizontalSplitter->addWidget(this->master->getLeftWidget());
	subHorizontalSplitter->addWidget(this->master->getMainWidget());
	mainVerticalSplitter->addWidget(subHorizontalSplitter);
	mainVerticalSplitter->addWidget(this->master->getBottomWidget());

	// splitter options
	mainVerticalSplitter->setOrientation(Qt::Vertical);
	subHorizontalSplitter->setOrientation(Qt::Horizontal);

	// hide the splitters' handles
	mainVerticalSplitter->setHandleWidth(1);
	subHorizontalSplitter->setHandleWidth(1);


	this->setCentralWidget(mainVerticalSplitter);


	// test
	//ui->leftDockWidget->setTitleBarWidget(new QTimeEdit());

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
	// TODO
}
