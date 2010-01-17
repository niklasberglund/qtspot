#include "sctableview.h"
#include "scplaylistitemmodel.h"
#include <QHeaderView>


SCTableView::SCTableView(QWidget *parent) :
	QTableView(parent)
{
	// display settings
	this->horizontalHeader()->hide();
	this->verticalHeader()->hide();
	this->setGridStyle(Qt::NoPen);

	// set up the model
	SCPlaylistItemModel *itemModel = new SCPlaylistItemModel();
	this->setModel(itemModel);
}
