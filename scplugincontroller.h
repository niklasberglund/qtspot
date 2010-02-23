#ifndef SCPLUGINCONTROLLER_H
#define SCPLUGINCONTROLLER_H

#include <QObject>
#include <QDir>
#include <QPluginLoader>
#include "scplugin.h"


class SCPluginController : public QObject
{
Q_OBJECT
public:
	explicit SCPluginController(QObject *parent = 0);
	void loadPlugins();
	SCPlugin* loadPlugin(QDir pluginDir);

private:
	QDir pluginsDirectory;
};

#endif // SCPLUGINCONTROLLER_H
