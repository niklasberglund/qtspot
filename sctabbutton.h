#ifndef SCTABBUTTON_H
#define SCTABBUTTON_H

#include "scbutton.h"

class SCTabButton : public SCButton
{
Q_OBJECT
public:
	explicit SCTabButton(QString tabText, QWidget *widget, QWidget *parent = 0);

private:
	bool isActive;
	QWidget *contentWidget;

signals:
	void changeWidget(QWidget *widget);

public slots:
	void selected();
	void deSelected();
};

#endif // SCTABBUTTON_H
