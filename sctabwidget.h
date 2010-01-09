#ifndef SCTABWIDGET_H
#define SCTABWIDGET_H

#include "scwidget.h"
#include "sctabbutton.h"
#include <QList>

class SCTabWidget : public SCWidget
{
public:
	SCTabWidget(QWidget *parent = 0);

private:
	QList<SCTabButton*> *tabButtons;

public slots:
	void addTab(QString title, QWidget *widget, int position = SCWidgetTop::Left);
};

#endif // SCTABWIDGET_H
