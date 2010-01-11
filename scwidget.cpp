#include "scwidget.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QSizePolicy>
#include <QHBoxLayout>
#include "scwidgettop.h"
#include "sctabbutton.h"
#include <QDebug>

SCWidget::SCWidget(int showTitleBar, QWidget *parent) :
	QFrame(parent)
{
	// style sheet
	this->setStyleSheet("SCWidget { background-color:#373737; border:1px solid #000000; }");

	// top
	this->top = new SCWidgetTop();


	// layout
	layout = new QVBoxLayout();
	this->content = new QFrame();
	this->content->setStyleSheet("QFrame { background-color:#2a2a2a; }");
	this->content->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);

	if(showTitleBar == SCWidget::ShowTitleBar)
	{
		layout->addWidget(this->top);
	}
	else if(showTitleBar == SCWidget::NoTitleBar)
	{
		layout->addWidget(new QWidget());
	}


	layout->addWidget(this->content);
	layout->setMargin(0);
	layout->setSpacing(0);
	this->setLayout(layout);
}


void SCWidget::setWidget(QWidget *widget)
{
	widget->setSizePolicy(this->content->sizePolicy());
	widget->setStyleSheet("QFrame { background-color:#2a2a2a; }");
	this->content->hide();
	//this->layout->removeWidget(this->content);
	this->content = widget;
	this->layout->addWidget(this->content);
}

void SCWidget::showWidget(QWidget *widget)
{
	this->setWidget(widget);
}
