#include "scplugin.h"
#include <QDir>
#include <QFile>
#include <QStringList>
#include <QDebug>

// include the plugin interfaces
#include "scleftmenuplugininterface.h"
#include "scplugininterface.h"


SCPlugin::SCPlugin(QObject *parent, QString pluginPath) :
	QObject(parent)
{
	QFile pluginFile(pluginPath);

	if(pluginFile.open(QIODevice::ReadOnly))
	{
		qDebug() << "OPENED";
		pluginLoader = new QPluginLoader(pluginFile.fileName(), this);
	}

	// This is what the constructor looked like before. The plugin's dir was searched for
	/*
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
			pluginLoader = new QPluginLoader(pluginFile.fileName(), this);
		}
	}
	*/
}


QObject* SCPlugin::instance() {
	return pluginLoader->instance();
}


QString SCPlugin::getName()
{
	// TEMP. TODO
	return "Some name";
	//return qobject_cast<>(pluginLoader->instance())->getName();
}
