#ifndef SCPLUGIN_H
#define SCPLUGIN_H

#include <QObject>
#include <QPluginLoader>


class SCPlugin : public QObject
{
Q_OBJECT
public:
	SCPlugin(QObject *parent = 0, QString pluginPath = QString());
	QObject* instance();

	QString getName();

private:
	QPluginLoader *pluginLoader;

signals:

public slots:

};

#endif // SCPLUGIN_H
