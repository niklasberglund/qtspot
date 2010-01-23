#include "scwidget.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QSizePolicy>
#include <QHBoxLayout>
#include "scwidgettop.h"
#include "sctabbutton.h"
#include <QDebug>
#include <QLineEdit>


SCWidget::SCWidget(int showTitleBar, QWidget *parent) :
	QSplitter(parent)
{
	// style sheet
	//this->setStyleSheet("SCWidget { background-color:#373737; border:1px solid #000000; }");

	// top
	this->top = new SCWidgetTop();


	// set up the splitter
	this->setOrientation(Qt::Vertical);
	this->setHandleWidth(2);

	//this->verticalLayout = new QVBoxLayout();
	this->content = new QFrame();
	//this->content->setStyleSheet("QFrame { background-color:#2a2a2a; }");
	this->content->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

	if(showTitleBar == SCWidget::ShowTitleBar)
	{
		this->addWidget(this->top);
	}
	else if(showTitleBar == SCWidget::NoTitleBar)
	{
		// simply dont add a title bar widget
	}


	//this->addWidget(this->content);
	this->addWidget(this->content);
}


void SCWidget::setWidget(QWidget *widget)
{
	widget->setSizePolicy(this->content->sizePolicy());
	widget->setStyleSheet("background-color:#2A2A2A; color:#C5CCCC");
	widget->setParent(this);

	this->content->hide(); // hide previously displayed widget
	this->content = widget; // replace with new widget
	this->content->show(); // show the new widget
}


void SCWidget::showWidget(QWidget *widget)
{
	this->setWidget(widget);
}
