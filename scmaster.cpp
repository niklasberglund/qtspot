#include "scmaster.h"
#include <QDebug>
#include "sctableview.h"
#include <QBoxLayout>
#include "scplaylistitemmodel.h"
#include <QLineEdit>
#include "scplaybackwidget.h"
#include "sctabwidget.h"
#include "sctracklistitemmodel.h"


SCMaster::SCMaster()
{
	// set up the main widget, and add some dummy tabs
	SCTabWidget *mainTabWidget = new SCTabWidget();
	mainTabWidget->addTab("line edit", new QLineEdit());
	SCTrackListItemModel *trackListItemModel = new SCTrackListItemModel();
	SCTableView *dummyTable = new SCTableView(NULL, trackListItemModel);
	mainTabWidget->addTab("table test", dummyTable);
	this->mainWidget = mainTabWidget;

	// set up the bottom widget
	this->bottomWidget = new SCPlaybackWidget();
	this->bottomWidget->setMinimumHeight(41);


	// set up the left widget
	this->leftWidget = new SCWidget(SCWidget::ShowTitleBar);
	this->leftWidget->setMaximumWidth(150);
	this->leftWidget->setMinimumWidth(150);

	// initiate models
	SCPlaylistItemModel *playlistItemModel = new SCPlaylistItemModel();

	// initiate widgets
	SCTableView *topLevelTableView = new SCTableView(leftWidget->getContent());
	SCTableView *searchTableView = new SCTableView(leftWidget->getContent());
	SCTableView *playlistTableView = new SCTableView(leftWidget->getContent(), playlistItemModel, SCTableView::WithoutZebraRows, SCTableView::WithoutHorizontalLabels);

	// set up layout
	QBoxLayout *boxLayout = new QBoxLayout(QBoxLayout::TopToBottom);
	boxLayout->setMargin(0);

	// TODO: implement item models for these table views
	// add widgets to the layout
	//boxLayout->addWidget(topLevelTableView);
	//boxLayout->addWidget(searchTableView);
	boxLayout->addWidget(playlistTableView);

	this->leftWidget->getContent()->setLayout(boxLayout);
}


void SCMaster::setLeftWidget(SCWidget* widget)
{
	this->leftWidget = widget;
}


void SCMaster::setMainWidget(SCWidget *widget)
{
	this->mainWidget = widget;
}


void SCMaster::setBottomWidget(SCWidget *widget)
{
	this->bottomWidget = widget;
}


// getters
SCWidget* SCMaster::getLeftWidget()
{
	return this->leftWidget;
}


SCWidget* SCMaster::getMainWidget()
{
	return this->mainWidget;
}


SCWidget* SCMaster::getBottomWidget()
{
	return this->bottomWidget;
}

