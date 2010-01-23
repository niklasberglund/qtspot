#include "scwidgettop.h"
#include <QSizePolicy>
#include <QSpacerItem>

SCWidgetTop::SCWidgetTop(QWidget *parent) :
	QFrame(parent)
{
	// set up
	this->setStyleSheet("SCWidgetTop { background-image:url(:/topgradient.png); background-repeat:repeat-x; background-color:red; }");
	this->setMinimumHeight(21);
	this->setMaximumHeight(21);

	// set up layouts
	mainBoxLayout = new QHBoxLayout();
	mainBoxLayout->setMargin(0);
	leftBoxLayout = new QHBoxLayout();
	rightBoxLayout = new QHBoxLayout();
	QSpacerItem *middleSpacerItem = new QSpacerItem(21, 21, QSizePolicy::Expanding); // horizontally expanding QSpacerItem

	// add items to main layout
	mainBoxLayout->addLayout(leftBoxLayout);
	mainBoxLayout->addSpacerItem(middleSpacerItem);
	mainBoxLayout->addLayout(rightBoxLayout);



	this->setLayout(mainBoxLayout);

	// size policy
	this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
}


void SCWidgetTop::addWidget(QWidget *widget, int position)
{
	widget->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);

	if(position == SCWidgetTop::Left)
	{
		leftBoxLayout->addWidget(widget);
	}
	else if(position == SCWidgetTop::Right)
	{
		rightBoxLayout->addWidget(widget);
	}
}


void SCWidgetTop::insertSeparator()
{
	/*
	QFrame *separator = new QFrame();
	separator->setFrameShape(QFrame::VLine);
	this->addWidget(separator);
	*/
}
