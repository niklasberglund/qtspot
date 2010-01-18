#include "sctrack.h"

SCTrack::SCTrack(QObject *parent) : QObject(parent)
{
}


void SCTrack::setName(QString trackName)
{
	this->name = trackName;
}


QString SCTrack::getName()
{
	return this->name;
}


void SCTrack::setLength(int trackLength)
{
	this->length = trackLength;
}


int SCTrack::getLength()
{
	return this->length;
}


