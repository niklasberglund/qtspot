#include "sctabbutton.h"
#include <QDebug>
#include <QVariant>

SCTabButton::SCTabButton(QString tabText, QWidget *widget, QWidget *parent) :
	SCButton(parent)
{
	//
	this->setText(tabText);
	this->contentWidget = widget;
	QObject::setProperty("selected", QVariant(false));

	// default values
	this->selectedTab = false;

	//this->setStyleSheet("SCTabButton { width:auto; height:21px; border:0px solid black; border-left:1px solid black; color:black; } ");
	this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

	QObject::connect(this, SIGNAL(clicked()), this, SLOT(selected()));
}


void SCTabButton::selected()
{
	emit changeWidget(this->contentWidget);

	this->setSelected(true);
	//this->setStyleSheet("SCTabButton { width:auto; height:21px; border:0px solid black; background-color:#2a2a2a; color:#f0f0f0; }");

	qDebug() << "emit";
}


void SCTabButton::deSelected()
{
	this->setSelected(false);
	//this->setStyleSheet("SCTabButton { width:auto; height:21px; border:0px solid black; border-left:1px solid black; color:black; }");
}



bool SCTabButton::isSelected()
{
	return this->selectedTab;
}


void SCTabButton::setSelected(bool value) // TODO. doesnt work
{
	if(value == true)
	{
		qDebug() << "selected tab";
	}


	this->selectedTab = value;
}

