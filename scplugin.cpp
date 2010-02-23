#include "scplugin.h"
#include <QDir>
#include <QFile>
#include <QStringList>
#include <QDebug>


SCPlugin::SCPlugin(QObject *parent, QString pluginPath) :
	QObject(parent)
{
	// look for a valid plugin in the specified path
	QDir pluginDir = QDir(pluginPath);

	QStringList pluginFileNames = QStringList() << "plugin.dylib" << "plugin.so" ;

	for(int i=0; i < pluginFileNames.size(); i++)
	{
		QString currentPluginFileName = pluginFileNames.at(i);
		QFile pluginFile(pluginDir.filePath(currentPluginFileName));

		if(pluginFile.open(QIODevice::ReadOnly))
		{
			qDebug() << "OPENED";
		}
	}

}
