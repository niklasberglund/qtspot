#include "sctableview.h"
#include "scplaylistitemmodel.h"
#include <QHeaderView>
#include <QPalette>


SCTableView::SCTableView(int zebra, int horizontalLabels, QWidget *parent) :
	QTableView(parent)
{
	// set up the colors
	this->firstRowColor = QColor(37, 37, 37);
	this->secondRowColor = QColor(42, 42, 42);
	QPalette paletteCopy = this->palette();
	paletteCopy.setColor(QPalette::Base, this->firstRowColor);
	paletteCopy.setColor(QPalette::AlternateBase, this->secondRowColor);

	// zebra rows?
	if(zebra == SCTableView::WithZebraRows)
	{
		this->setAlternatingRowColors(true);
	}
	else
	{
		this->setAlternatingRowColors(false);
	}

	// hide horizontal labels?
	if(horizontalLabels == SCTableView::WithoutHorizontalLabels)
	{
		this->horizontalHeader()->hide();
	}

	// display settings
	this->verticalHeader()->hide();
	this->setGridStyle(Qt::NoPen);

	// set up the model
	SCPlaylistItemModel *itemModel = new SCPlaylistItemModel();
	this->setModel(itemModel);

	// not editable
	this->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
