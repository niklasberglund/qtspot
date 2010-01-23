#ifndef SCSPLITTERHANDLE_H
#define SCSPLITTERHANDLE_H

#include <QSplitterHandle>
#include <QFlags>
#include "scsplitter.h"


class SCSplitterHandle : public QSplitterHandle
{
Q_OBJECT
public:
	explicit SCSplitterHandle(Qt::Orientation orientation, SCSplitter *parent = 0);

private:
	void paintEvent(QPaintEvent* event);

signals:

public slots:

};

#endif // SCSPLITTERHANDLE_H
