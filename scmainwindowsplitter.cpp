#include "scmainwindowsplitter.h"
#include <QLineEdit>
#include <QDebug>

SCMainWindowSplitter::SCMainWindowSplitter(QWidget *parent) :
    QSplitter(parent)
{
	// we want a vertical splitter
	this->setOrientation(Qt::Vertical);

	this->mainWidget = new QWidget();
	this->addWidget(this->mainWidget);

	// playback control widget
	this->addWidget(new QWidget());

	// test
	QSplitterHandle *handle = this->handle(1);
	if(true)
	{
		qDebug() << "got handle";
	}
}


void SCMainWindowSplitter::setMainWidget(QWidget *widget)
{
	this->mainWidget = widget;

	// need to do some kind of update?
}
