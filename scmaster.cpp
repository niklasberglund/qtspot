#include "scmaster.h"
#include <QDebug>
#include "sctableview.h"


SCMaster::SCMaster()
{
}


void SCMaster::setLeftWidget(SCWidget* widget)
{
	this->leftWidget = widget;
}


void SCMaster::setMainWidget(SCWidget *widget)
{
	this->mainWidget = widget;
}


void SCMaster::setBottomWidget(SCWidget *widget)
{
	this->bottomWidget = widget;
}


// getters
SCWidget* SCMaster::getLeftWidget()
{
	return this->leftWidget;
}


SCWidget* SCMaster::getMainWidget()
{
	return this->mainWidget;
}


SCWidget* SCMaster::getBottomWidget()
{
	return this->bottomWidget;
}

