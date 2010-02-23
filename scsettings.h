#ifndef SCSETTINGS_H
#define SCSETTINGS_H

#include <QSettings>
#include <QObject>
#include <QDir>


class SCSettings : public QSettings
{
public:
	SCSettings(QObject *parent = 0);
	QDir getPluginsDirectory();

private:
	QDir pluginsDirectory;
	void setPluginsDirectory(QDir directory);
};

#endif // SCSETTINGS_H
