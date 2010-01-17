#ifndef SCPLAYBACKWIDGET_H
#define SCPLAYBACKWIDGET_H

#include <QFrame>
#include <QWidget>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QPushButton>
#include "scwidget.h"

class SCPlaybackWidget : public SCWidget
{
Q_OBJECT
public:
	SCPlaybackWidget(QWidget *parent = 0);

private:
	QHBoxLayout *mainBoxLayout;
	QHBoxLayout *leftBoxLayout;
	QSpacerItem *middleSpacer;
	QHBoxLayout *rightBoxLayout;

	QPushButton *previousButton;
	QPushButton *playPauseButton;
	QPushButton *nextButton;

signals:

public slots:

};

#endif // SCPLAYBACKWIDGET_H
