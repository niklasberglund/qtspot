#ifndef SCPLAYLISTITEMMODEL_H
#define SCPLAYLISTITEMMODEL_H

#include "scitemmodel.h"
#include "scplaylist.h"


class SCPlaylistItemModel : public SCItemModel
{
Q_OBJECT
public:
	SCPlaylistItemModel(QObject *parent = 0);
	void addPlaylist(SCPlaylist *playlist);

private:
	QList<QStandardItem*> *playlistList;

signals:

public slots:

};

#endif // SCPLAYLISTITEMMODEL_H
