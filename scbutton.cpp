#include "scbutton.h"


SCButton::SCButton(QWidget *parent) : QPushButton(parent)
{
	this->setStyleSheet("SCButton { border:1px solid green; }");
}
