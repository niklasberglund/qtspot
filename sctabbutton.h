#ifndef SCTABBUTTON_H
#define SCTABBUTTON_H

#include "scbutton.h"

class SCTabButton : public SCButton
{
Q_OBJECT
Q_PROPERTY(bool selected READ isSelected WRITE setSelected)
public:
	SCTabButton(QString tabText, QWidget *widget, QWidget *parent = 0);
	bool isSelected();
	void setSelected(bool value);

private:
	bool selectedTab;
	QWidget *contentWidget;

signals:
	void changeWidget(QWidget *widget);

public slots:
	void selected();
	void deSelected();
};

#endif // SCTABBUTTON_H
