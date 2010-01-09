#include "sctabbutton.h"
#include <QDebug>

SCTabButton::SCTabButton(QString tabText, QWidget *widget, QWidget *parent) :
	SCButton(parent)
{
	//
	this->setText(tabText);
	this->contentWidget = widget;

	// default values
	this->isActive = false;

	this->setStyleSheet("SCTabButton { width:auto; height:21px; border:0px solid black; border-left:1px solid black; color:black; } ");

	QObject::connect(this, SIGNAL(clicked()), this, SLOT(selected()));
}


void SCTabButton::selected()
{
	this->isActive = true;
	this->setStyleSheet("SCTabButton { width:auto; height:21px; border:0px solid black; background-color:#2a2a2a; color:#f0f0f0; }");

	emit changeWidget(this->contentWidget);
	qDebug() << "emit";
}


void SCTabButton::deSelected()
{
	this->isActive = false;
	this->setStyleSheet("SCTabButton { width:auto; height:21px; border:0px solid black; border-left:1px solid black; color:black; }");
}
