#include "sctabwidget.h"
#include "scwidgettop.h"
#include "sctabbutton.h"
#include <QLineEdit>
#include <QCheckBox>

SCTabWidget::SCTabWidget(QWidget *parent) : SCWidget(SCWidget::ShowTitleBar, parent)
{
	// initialize
	tabButtons = new QList<SCTabButton*>();

	// style sheet
	this->setStyleSheet("SCWidget { background-color:#373737; border:1px solid #000000; }");

	// top
	this->addTab("asd", new QCheckBox());
	this->addTab("test", new QLineEdit());
	this->addTab("qweqwe", new QWidget(), 1);
}


void SCTabWidget::addTab(QString title, QWidget *widget, int position)
{
	SCTabButton *tabButton = new SCTabButton(title, widget);
	this->top->addWidget(tabButton, position);

	// add to list
	tabButtons->append(tabButton);

	QObject::connect(tabButton, SIGNAL(changeWidget(QWidget*)), this, SLOT(setWidget(QWidget*)));
}

