#ifndef SCTRACKLISTITEMMODEL_H
#define SCTRACKLISTITEMMODEL_H

#include "scitemmodel.h"
#include <QList>
#include "sctrack.h"


class SCTrackListItemModel : public SCItemModel
{
Q_OBJECT
public:
	SCTrackListItemModel(QObject *parent = 0);
	void addTrack(SCTrack *track);

private:
	QList<SCTrack*> trackList;

signals:

public slots:

};

#endif // SCTRACKLISTITEMMODEL_H
