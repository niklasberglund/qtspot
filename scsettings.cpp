#include "scsettings.h"
#include <QApplication>
#include <QDebug>


SCSettings::SCSettings(QObject *parent) : QSettings(parent)
{
	this->pluginsDirectory = QDir();

	// set plugins directory(platform-specific)
	#ifdef Q_WS_MAC // Mac OS X
	// loading plugins from the source directory at the moment. TODO: change this. load from deploy dir
	QDir pluginsDir = QApplication::applicationDirPath();
	pluginsDir.cdUp();
	pluginsDir.cdUp();
	pluginsDir.cdUp();
	pluginsDir.cd("plugins");
	this->pluginsDirectory = pluginsDir;
	#endif

	// TODO: implement these others, not only the Mac one
	#ifdef Q_WS_X11 // Linux
	qDebug() << "WARNING: determining the plugin directory on this platform is not implemented";
	#endif

	#ifdef Q_WS_QWS // embedded Linux
	qDebug() << "WARNING: determining the plugin directory on this platform is not implemented";
	#endif

	#ifdef Q_WS_WIN // Windows
	qDebug() << "WARNING: determining the plugin directory on this platform is not implemented";
	#endif
}


void SCSettings::setPluginsDirectory(QDir directory)
{
	this->pluginsDirectory = directory;
}

QDir SCSettings::getPluginsDirectory()
{
	return this->pluginsDirectory;
}


