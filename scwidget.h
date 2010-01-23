#ifndef SCWIDGET_H
#define SCWIDGET_H

#include <QWidget>
#include <QFrame>
#include "scwidget.h"
#include "scwidgettop.h"
#include <QSplitter>


class SCWidget : public QSplitter
{
Q_OBJECT
public:
	SCWidget(int showTitleBar = 1, QWidget *parent = 0);
	enum TitleBar {NoTitleBar, ShowTitleBar};
	void setWidget(QWidget *widget);

private:
	protected:
	SCWidgetTop* getTop();
	void topAdd(QWidget *widget, int position);
	SCWidgetTop *top;
	QWidget *content;
	QVBoxLayout *verticalLayout;
	QSplitter *verticalSplitter;

signals:

public slots:
	void showWidget(QWidget *widget);
};

#endif // SCWIDGET_H
