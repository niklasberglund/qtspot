#ifndef SCSPLITTER_H
#define SCSPLITTER_H

#include <QSplitter>

class SCSplitter : public QSplitter
{
Q_OBJECT
public:
	explicit SCSplitter(Qt::Orientation splitterOrientation = Qt::Horizontal, QWidget *parent = 0);

private:
	Qt::Orientation orientation;

protected:
	QSplitterHandle * createHandle();

signals:

public slots:

};

#endif // SCSPLITTER_H
