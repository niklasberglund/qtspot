#include "scplaylistitemmodel.h"
#include <QList>


SCPlaylistItemModel::SCPlaylistItemModel(QObject *parent) : QStandardItemModel(parent)
{
	QStandardItem *testItem = new QStandardItem("asd");
	QList<QStandardItem*> list = QList<QStandardItem*>();
	list.append(new QStandardItem("test"));

	this->appendColumn(list);

	this->appendRow(testItem);

	// colors?
	this->setData(this->indexFromItem(testItem), QColor(37, 37, 37), Qt::BackgroundRole);
}
