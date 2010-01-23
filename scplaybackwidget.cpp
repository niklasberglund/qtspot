#include "scplaybackwidget.h"
#include <QPushButton>
#include <QSizePolicy>
#include <QIcon>
#include <QBitmap>
#include <QRegion>
#include "sciconbutton.h"

SCPlaybackWidget::SCPlaybackWidget(QWidget *parent) : SCWidget(SCWidget::NoTitleBar, parent)
{
	// initialize layouts and spacer
	this->mainBoxLayout = new QHBoxLayout();
	this->leftBoxLayout = new QHBoxLayout();
	this->middleSpacer = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Expanding);
	this->rightBoxLayout = new QHBoxLayout();

	//this->setStyleSheet("SCPlaybackWidget { background-image:url(':images/bottomgradient.gif'); background-repeat: repeat-xy; }");

	// set up playback buttons
	this->previousButton = new SCIconButton(QIcon(":resources/images/previousButton.gif"));
	this->playPauseButton = new SCIconButton(QIcon(":resources/images/pauseButton.gif"));
	this->nextButton = new SCIconButton(QIcon(":resources/images/nextButton.gif"));

	// set buttons' masks
	//this->previousButton->setMask(QBitmap(":images/previousButtonMask.gif"));
	//this->previousButton->setMask(QRegion(0, 0, 24, 23, QRegion::Ellipse));

	// test
	this->leftBoxLayout->setMargin(0);
	this->mainBoxLayout->setMargin(0);

	// add the buttons
	this->leftBoxLayout->addWidget(this->previousButton);
	this->leftBoxLayout->addWidget(this->playPauseButton);
	this->leftBoxLayout->addWidget(this->nextButton);

	this->mainBoxLayout->addLayout(this->leftBoxLayout);
	this->mainBoxLayout->addSpacerItem(this->middleSpacer);
	this->mainBoxLayout->addLayout(this->rightBoxLayout);

	this->content->setLayout(this->mainBoxLayout);
}
