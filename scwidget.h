#ifndef SCWIDGET_H
#define SCWIDGET_H

#include <QWidget>
#include <QFrame>

class SCWidget : public QFrame
{
Q_OBJECT
public:
	SCWidget(QWidget *parent = 0);

private:
	QFrame *top;

signals:

public slots:

};

#endif // SCWIDGET_H
