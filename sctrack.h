#ifndef SCTRACK_H
#define SCTRACK_H

#include <QObject>

class SCTrack : public QObject
{
Q_OBJECT
public:
	SCTrack(QObject *parent = 0);
	void setName(QString trackName);
	QString getName();
	void setLength(int trackLength);
	int getLength();

private:
	QString name;
	int length;
signals:

public slots:

};

#endif // SCTRACK_H
