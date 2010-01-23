#include "scsplitter.h"
#include "scsplitterhandle.h"


SCSplitter::SCSplitter(Qt::Orientation splitterOrientation, QWidget *parent) : QSplitter(splitterOrientation, parent)
{
	this->orientation = splitterOrientation;
}

QSplitterHandle * SCSplitter::createHandle()
{
	return new SCSplitterHandle(this->orientation, this);
}
