#include "scsplitterhandle.h"
#include <QPainter>


SCSplitterHandle::SCSplitterHandle(Qt::Orientation orientation = Qt::Horizontal, SCSplitter *parent) :
		QSplitterHandle(orientation, parent)
{	
}


void SCSplitterHandle::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	painter.setBrush(Qt::black); // fill
	painter.drawRect(0, 0, this->width()-1, this->height()-1); // paint it black!
}
