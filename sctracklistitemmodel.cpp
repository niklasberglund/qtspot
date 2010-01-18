#include "sctracklistitemmodel.h"
#include "sctrack.h"
#include <QStringList>


SCTrackListItemModel::SCTrackListItemModel(QObject *parent) : SCItemModel(parent)
{
	// initialize list
	this->trackList = QList<SCTrack*>();

	// labels
	this->setHorizontalHeaderLabels(QStringList() << "" << "Track" << "Artist" << "Time" << "Popularity" << "Album");

	// dummy data
	SCTrack *dummyTrack = new SCTrack();
	dummyTrack->setName("Dummy Track");
	dummyTrack->setLength(1234);
	this->addTrack(dummyTrack);

}


void SCTrackListItemModel::addTrack(SCTrack *track)
{
	QList<QStandardItem*> items = QList<QStandardItem*>();
	items.append(new QStandardItem(track->getName()));
	items.append(new QStandardItem(track->getLength()));

	this->appendRow(items);
}
