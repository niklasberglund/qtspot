#include "mainwindow.h"
#include "sctabwidget.h"
#include <QTimeEdit>
#include "scwidget.h"
#include "sctabwidget.h"
#include <QGridLayout>
#include <QLineEdit>
#include "scwidgettop.h"
#include "scmainwindowsplitter.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	// QMainWindow(parent), ui(new Ui::MainWindow)
	//ui->setupUi(this);

	// main window settings
	this->setMinimumSize(800,600);
	this->setWindowTitle("Spotify");

	// set up main widget
	//SCMainWindowSplitter *mainWindowSplitter = new SCMainWindowSplitter();
	//this->setCentralWidget(mainWindowSplitter);

	// set up the widgets to be put into the layout
	leftWidget = new SCWidget();
	mainWidget = new SCTabWidget();
	bottomWidget = new SCWidget();

	leftWidget->setMaximumWidth(150);
	bottomWidget->setMaximumHeight(70);

	// set up splitters
	QSplitter *mainVerticalSplitter = new QSplitter(); // splits the main window in 2 - upper parts and playback widget
	QSplitter *subHorizontalSplitter = new QSplitter(); // splits the upper part horizontally

	// add widgets to the splitters
	subHorizontalSplitter->addWidget(leftWidget);
	subHorizontalSplitter->addWidget(mainWidget);
	mainVerticalSplitter->addWidget(subHorizontalSplitter);
	mainVerticalSplitter->addWidget(bottomWidget);

	// splitter options
	mainVerticalSplitter->setOrientation(Qt::Vertical);
	mainVerticalSplitter->handle(1)->hide(); // dont display handle
	subHorizontalSplitter->setOrientation(Qt::Horizontal);


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
	//delete ui;
}
