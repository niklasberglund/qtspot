#include "scmainwindowsplitter.h"
#include <QLineEdit>

SCMainWindowSplitter::SCMainWindowSplitter(QWidget *parent) :
    QSplitter(parent)
{
	// we want a vertical splitter
	this->setOrientation(Qt::Vertical);

	this->mainWidget = new QWidget();
	this->addWidget(this->mainWidget);

	// playback control widget
	this->addWidget(new QWidget());
}


void SCMainWindowSplitter::setMainWidget(QWidget *widget)
{
	this->mainWidget = widget;

	// need to do some kind of update?
}
