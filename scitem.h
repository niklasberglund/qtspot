#ifndef SCITEM_H
#define SCITEM_H

#include <QStandardItem>
#include "scplaylist.h"
#include "sctrack.h"


class SCItem : public QStandardItem
{
public:
	SCItem();
	SCItem(SCTrack *track);
	SCItem(SCPlaylist *playlist);

signals:

public slots:

};

#endif // SCITEM_H
