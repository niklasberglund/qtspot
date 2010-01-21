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
	QFrame(parent)
{
	// style sheet
	//this->setStyleSheet("SCWidget { background-color:#373737; border:1px solid #000000; }");

	// top
	this->top = new SCWidgetTop();


	// layout
	this->verticalLayout = new QVBoxLayout();
	this->content = new QFrame();
	//this->content->setStyleSheet("QFrame { background-color:#2a2a2a; }");
	this->content->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

	if(showTitleBar == SCWidget::ShowTitleBar)
	{
		verticalLayout->addWidget(this->top);
	}
	else if(showTitleBar == SCWidget::NoTitleBar)
	{
		verticalLayout->addWidget(new QWidget()); // this is not how we want to handle it... TODO
	}


	verticalLayout->addWidget(this->content);
	verticalLayout->setMargin(0);
	verticalLayout->setSpacing(0);
	this->setLayout(verticalLayout);
}


void SCWidget::setWidget(QWidget *widget)
{
	widget->setSizePolicy(this->content->sizePolicy());
	widget->setStyleSheet("background-color:#2A2A2A; color:#C5CCCC");

	this->verticalLayout->removeWidget(this->content);
	this->verticalLayout->addWidget(widget);

	this->content = widget;

	// attempt to a temporary fix
	/*
	widget->setSizePolicy(this->content->sizePolicy());
	widget->setStyleSheet("background-color:#2A2A2A; color:#C5CCCC");

	QVBoxLayout *newLayout = new QVBoxLayout();
	//newLayout->addWidget(new QLineEdit());
	newLayout->addWidget(widget);

	// remove old layout
	delete this->layout();

	// set new layout
	this->setLayout(newLayout);
	*/

	// should be doing something like this
	/*

	// is there already a widget set?
	if(this->content)
	{
		this->layout->removeWidget(this->content);
	}

	setSizePolicy(this->content->sizePolicy());
	widget->setStyleSheet("background-color:#2A2A2A; color:#C5CCCC");
	//widget->setStyleSheet("background-color:red;"); // for debugging
	this->content = widget;
	this->layout->addWidget(this->content);
*/


/*	widget->setSizePolicy(this->content->sizePolicy());
	widget->setStyleSheet("QFrame { background-color:#2a2a2a; }");
	this->content = widget;
	this->content->update();
	this->layout->update();

	this->content->setVisible(false);
	this->layout->removeWidget(this->content);
	this->content = widget;
	this->layout->addWidget(widget);
*/
}


void SCWidget::showWidget(QWidget *widget)
{
	this->setWidget(widget);
}
