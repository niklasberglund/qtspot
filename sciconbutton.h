#ifndef SCICONBUTTON_H
#define SCICONBUTTON_H

#include "scbutton.h"
#include <QIcon>

class SCIconButton : public SCButton
{
Q_OBJECT
public:
	SCIconButton(QIcon buttonIcon, QWidget *parent = 0);
	void setIcon(QIcon buttonIcon);

private:
	void paintEvent(QPaintEvent* event);

	QIcon *icon;
	int width;
	int height;

signals:

public slots:

};

#endif // SCICONBUTTON_H
