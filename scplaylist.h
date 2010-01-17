#ifndef SCPLAYLIST_H
#define SCPLAYLIST_H

#include <QString>


class SCPlaylist
{
public:
	SCPlaylist(QString name = "");
	void setName(QString name);
	QString getName();

private:
	QString playlistName;
};

#endif // SCPLAYLIST_H
