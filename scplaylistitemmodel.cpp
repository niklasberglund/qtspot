#include "scplaylistitemmodel.h"
#include <QList>
#include <QFont>


SCPlaylistItemModel::SCPlaylistItemModel(int zebra, QObject *parent) : QStandardItemModel(parent)
{
	// default values
	this->zebraStyle = zebra;
	this->isEvenRow = true;
	this->evenRowBackgroundColor = QColor(42, 42, 42);
	this->oddRowBackgroundColor = QColor(37, 37, 37);

	QStandardItem *testItem = new QStandardItem("asdqwes");
	this->playlistList = new QList<QStandardItem*>();

	this->addPlaylist(new SCPlaylist("test playlist"));
	this->addPlaylist(new SCPlaylist("test playlist"));
}


void SCPlaylistItemModel::addPlaylist(SCPlaylist *playlist)
{
	// set up
	QStandardItem *newItem = new QStandardItem(playlist->getName());
	this->playlistList->append(newItem);
	this->appendRow(newItem);
	this->setData(this->indexFromItem(newItem), QFont("Arial", 11), Qt::FontRole);


	// NOTE: just noticed that zebra rows are implemented in QAbstractItemView... see QAbstractItemView::alternatingRowColors
	// zebra rows
	QColor backgroundColor; // holds the background color of the row to be added

	if(this->zebraStyle == SCPlaylistItemModel::WithZebraRows)
	{
		if(this->isEvenRow)
		{
			backgroundColor = this->evenRowBackgroundColor;
		}
		else
		{
			backgroundColor = this->oddRowBackgroundColor;
		}
	}
	else
	{
		backgroundColor = this->evenRowBackgroundColor;
	}


	this->setData(this->indexFromItem(newItem), backgroundColor, Qt::BackgroundRole);

	this->isEvenRow = !this->isEvenRow; // toggle true/false
}
