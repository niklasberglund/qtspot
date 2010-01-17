#include "scplaylist.h"

SCPlaylist::SCPlaylist(QString name)
{
	this->playlistName = name;
}


void SCPlaylist::setName(QString name)
{
	this->playlistName = name;
}


QString SCPlaylist::getName()
{
	return this->playlistName;
}
