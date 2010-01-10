#include "sciconbutton.h"
#include <QPainter>
#include <QPixmap>
#include <QRect>


SCIconButton::SCIconButton(QIcon buttonIcon, QWidget *parent) : SCButton(parent)
{
	this->setIcon(buttonIcon);

	// make the button as big as it's icon
	QPixmap iconPixmap = this->icon->pixmap(100, 100); // assuming icons will never be larger than 100x100
	this->width = iconPixmap.rect().width();
	this->height = iconPixmap.rect().height();
	this->setMaximumSize(this->width, this->height);

	// debug
	this->setStyleSheet("SCIconButton { border:1px solid red; }");
}


void SCIconButton::setIcon(QIcon buttonIcon)
{
	this->icon = new QIcon(buttonIcon);
}


void SCIconButton::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	this->icon->paint(&painter, 0, 0, this->width, this->height);

	// debug border
	//painter.setPen(Qt::red);
	//painter.drawRect(0, 0, this->width-1, this->height-1);
}
