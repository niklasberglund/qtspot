#ifndef SCWIDGET_H
#define SCWIDGET_H

#include <QWidget>
#include <QFrame>
#include "scwidgettop.h"

class SCWidget : public QFrame
{
Q_OBJECT
public:
	SCWidget(QWidget *parent = 0);

private:
	protected:
	SCWidgetTop* getTop();
	void topAdd(QWidget *widget, int position);
	SCWidgetTop *top;
	QWidget *content;
	QVBoxLayout *layout;

signals:

public slots:
	void setWidget(QWidget *widget);
};

#endif // SCWIDGET_H
