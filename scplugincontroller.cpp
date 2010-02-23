#include "scplugincontroller.h"
#include <QDebug>
#include "scapplication.h"
#include "scsettings.h"
#include "scplugin.h"
#include <QLibrary>


SCPluginController::SCPluginController(QObject *parent) :
    QObject(parent)
{
	this->pluginsDirectory = QApplication::applicationDirPath();

	this->loadPlugins();
}


void SCPluginController::loadPlugins()
{
	//qDebug() << "scanning directory for plugins: " << qApp->getSettings();
	//qDebug() << SCApplication::instance()->getSettings();

	SCSettings *settings = new SCSettings(this);

	qDebug() << "begin looking for plugins";

	// iterate the plugin directory and load the valid plugin library file, if there is any
	foreach(QString dirName, settings->getPluginsDirectory().entryList(QDir::Dirs | QDir::NoDotAndDotDot))
	{
		qDebug() << "  looking for plugin in " << dirName;
		QDir currentPluginDir = settings->getPluginsDirectory();
		currentPluginDir.cd(dirName);

		qDebug() << currentPluginDir;


		this->loadPlugin(currentPluginDir);
	}

	qDebug() << "finished looking for plugins";
}



SCPlugin* SCPluginController::loadPlugin(QDir pluginDir)
{
	// valid plugin file names
	QStringList pluginFileNames = QStringList() << "libplugin.dylib" << "libplugin.so"  << "libplugin.dll";

	for(int i=0; i < pluginFileNames.size(); i++)
	{
		QString currentPluginFileName = pluginFileNames.at(i);
		QFile pluginFile(pluginDir.filePath(currentPluginFileName));

		if(pluginFile.open(QIODevice::ReadOnly))
		{
			qDebug() << "Identified " << pluginFile.fileName() << " as a valid plugin file";
			if(QLibrary::isLibrary(pluginFile.fileName()))
			{
				qDebug() << "Loading plugin " << pluginFile.fileName();
				SCPlugin *plugin = new SCPlugin(this, pluginFile.fileName());
			}
			else
			{
				qDebug() << "WARNING: " << pluginFile.fileName() << " is not a library(plugin)";
			}
		}
	}
}


