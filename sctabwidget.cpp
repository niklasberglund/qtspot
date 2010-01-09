#include "sctabwidget.h"
#include "scwidgettop.h"
#include "sctabbutton.h"
#include <QLineEdit>

SCTabWidget::SCTabWidget(QWidget *parent) : SCWidget(parent)
{
	// style sheet
	this->setStyleSheet("SCWidget { background-color:#373737; border:1px solid #000000; }");

	// top
	this->addTab("asd", new QWidget());
	this->addTab("test", new QLineEdit());
	this->addTab("qweqwe", new QWidget(), 1);
}


void SCTabWidget::addTab(QString title, QWidget *widget, int position)
{
	SCTabButton *tabButton = new SCTabButton(title, widget);
	this->top->addWidget(tabButton, position);

	QObject::connect(tabButton, SIGNAL(changeWidget(QWidget*)), this, SLOT(setWidget(QWidget*)));
}

