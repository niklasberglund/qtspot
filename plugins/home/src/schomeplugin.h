#ifndef SCHOMEPLUGIN_H
#define SCHOMEPLUGIN_H

#include <QtPlugin>
#include <QObject>
#include "scplugininterface.h"
#include "scitemmodel.h"


class SCHomePlugin : public QObject, public SCPluginInterface
{
Q_OBJECT
Q_INTERFACES(SCPluginInterface)

public:
	//SCHomePlugin(SCMasterController *masterController);
	//QList<SCItemModel*> getLeftMenuItemModels();
	QString getName();
};

#endif //SCHOMEPLUGIN_H
