#ifndef SCLEFTMENUPLUGININTERFACE_H
#define SCLEFTMENUPLUGININTERFACE_H

#include <QList>
#include "scitemmodel.h"

class SCLeftMenuPluginInterface
{
public:
	virtual ~SCLeftMenuPluginInterface() {};
	virtual QList<SCItemModel*> getLeftMenuItemModels() = 0;
};


Q_DECLARE_INTERFACE(SCLeftMenuPluginInterface, "SCLeftMenuPluginInterface/0.1")

#endif // SCLEFTMENUPLUGININTERFACE_H
