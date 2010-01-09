#ifndef SCTABWIDGET_H
#define SCTABWIDGET_H

#include "scwidget.h"
#include "sctabbutton.h"

class SCTabWidget : public SCWidget
{
public:
	SCTabWidget(QWidget *parent = 0);

public slots:
	void addTab(QString title, QWidget *widget, int position = SCWidgetTop::Left);
};

#endif // SCTABWIDGET_H
