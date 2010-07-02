#include "scmastercontroller.h"
#include <QDebug>
#include "sctableview.h"
#include <QBoxLayout>
#include "scplaylistitemmodel.h"
#include <QLineEdit>
#include "scplaybackwidget.h"
#include "sctabwidget.h"
#include "sctracklistitemmodel.h"


SCMasterController::SCMasterController()
{
	// set up the main widget, and add some dummy tabs
	SCTabWidget *mainTabWidget = new SCTabWidget();
	mainTabWidget->addTab("line edit", new QLineEdit());
	SCTrackListItemModel *trackListItemModel = new SCTrackListItemModel();

	// dummy table tab
	SCTableView *dummyTable = new SCTableView(NULL, trackListItemModel);
	mainTabWidget->addTab("table test", dummyTable);

	this->mainWidget = mainTabWidget;
	this->mainWidget = new SCWidget();


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
	//SCTableView *topLevelTableView = new SCTableView(leftWidget->getContent());
	//SCTableView *searchTableView = new SCTableView(leftWidget->getContent());
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


void SCMasterController::setLeftWidget(SCWidget* widget)
{
	this->leftWidget = widget;
}


void SCMasterController::setMainWidget(SCWidget *widget)
{
	this->mainWidget = widget;

	emit mainWidgetChanged(widget);
}


void SCMasterController::setBottomWidget(SCWidget *widget)
{
	this->bottomWidget = widget;
}


// getters
SCWidget* SCMasterController::getLeftWidget()
{
	return this->leftWidget;
}


SCWidget* SCMasterController::getMainWidget()
{
	return this->mainWidget;
}


SCWidget* SCMasterController::getBottomWidget()
{
	return this->bottomWidget;
}


// SLOTS
void SCMasterController::changeMainWidget(SCWidget *widget) {
	this->setMainWidget(widget);
}

