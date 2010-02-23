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
#include "sctracklistitemmodel.h"
#include "scplaylistitemmodel.h"
#include <QFile>
#include "scsplitter.h"
#include "scplugincontroller.h"
#include "scsettings.h"
#include "scapplication.h"


MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	// testing. TODO: move this to somewhere else
	SCPluginController *pluginController = new SCPluginController();
	SCSettings *settings = new SCSettings(this);
	qDebug() << settings->getPluginsDirectory();

	// "master" holds instances of the basic widgets in the client
	this->master = new SCMasterController();

	// main window settings
	this->setMinimumSize(600,400);
	this->resize(800, 600); // initial size
	this->setWindowTitle("Spotify");

	// apply application-wide stylesheet from qss-file
	QFile styleSheetFile(":stylesheets/application.qss");
	styleSheetFile.open(QFile::ReadOnly);
	this->setStyleSheet(QString(styleSheetFile.readAll().data())); // this is not the optimal solution... must do clean then install for changes in qcc file to take effect

	// set up splitters
	SCSplitter *mainVerticalSplitter = new SCSplitter(); // splits the main window in 2 - upper parts and playback widget
	SCSplitter *subHorizontalSplitter = new SCSplitter(); // splits the upper part horizontally

	// add widgets to the splitters
	subHorizontalSplitter->addWidget(this->master->getLeftWidget());
	subHorizontalSplitter->addWidget(this->master->getMainWidget());
	mainVerticalSplitter->addWidget(subHorizontalSplitter);
	mainVerticalSplitter->addWidget(this->master->getBottomWidget());

	// splitter options
	mainVerticalSplitter->setOrientation(Qt::Vertical);
	subHorizontalSplitter->setOrientation(Qt::Horizontal);
	mainVerticalSplitter->setSizes(QList<int>() << 9999 << 41); // setting the first widget's height to 9999. this is a bit nasty...
	subHorizontalSplitter->setSizes(QList<int>() << 150 << 9999);

	// widget options
	subHorizontalSplitter->widget(1)->setStyleSheet("background-color:#373737;"); // color the playlist view's background

	// hide the splitters' handles
	mainVerticalSplitter->setHandleWidth(1);
	subHorizontalSplitter->setHandleWidth(1);

	// display the widgets we have set up
	this->setCentralWidget(mainVerticalSplitter);
}

MainWindow::~MainWindow()
{
	// TODO
}
