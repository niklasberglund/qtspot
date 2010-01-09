#ifndef SCWIDGET_H
#define SCWIDGET_H

#include <QWidget>
#include <QFrame>
#include "scwidgettop.h"

class SCWidget : public QFrame
{
Q_OBJECT
public:
	SCWidget(int showTitleBar = 1, QWidget *parent = 0);
	enum TitleBar {NoTitleBar, ShowTitleBar};

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
