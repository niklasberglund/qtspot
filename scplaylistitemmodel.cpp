/*
	DEPRECATED
*/


#include "scplaylistitemmodel.h"
#include <QList>
#include <QFont>


SCPlaylistItemModel::SCPlaylistItemModel(QObject *parent) : SCItemModel(parent)
{
	this->setHorizontalHeaderLabels(QStringList() << "title");

	this->playlistList = new QList<QStandardItem*>();

	this->addPlaylist(new SCPlaylist("Hits"));
	this->addPlaylist(new SCPlaylist("Another playlist"));
}


void SCPlaylistItemModel::addPlaylist(SCPlaylist *playlist)
{
	QList<QStandardItem*> items = QList<QStandardItem*>();
	items.append(new QStandardItem(playlist->getName()));

	this->appendRow(items);
}

/*
	DEPRECATED
*/
