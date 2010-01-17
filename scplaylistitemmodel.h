#ifndef SCPLAYLISTITEMMODEL_H
#define SCPLAYLISTITEMMODEL_H

#include <QStandardItemModel>
#include "scplaylist.h"


class SCPlaylistItemModel : public QStandardItemModel
{
Q_OBJECT
public:
	SCPlaylistItemModel(int zebra = SCPlaylistItemModel::NoZebraRows, QObject *parent = 0);
	void addPlaylist(SCPlaylist *playlist);
	enum ZebraRows {NoZebraRows, WithZebraRows};

private:
	QList<QStandardItem*> *playlistList;
	int zebraStyle;
	bool isEvenRow; // is the next row going to be even or odd? (for "zebra rows")
	QColor evenRowBackgroundColor;
	QColor oddRowBackgroundColor;

signals:

public slots:

};

#endif // SCPLAYLISTITEMMODEL_H
