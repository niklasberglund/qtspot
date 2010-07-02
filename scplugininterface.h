#ifndef SCPLUGININTERFACE_H
#define SCPLUGININTERFACE_H

#include "scmastercontroller.h"

class SCPluginInterface
{
public:
	//SCPluginInterface(SCMasterController*);

	virtual QString getName() = 0;
	virtual ~SCPluginInterface() {}
};


Q_DECLARE_INTERFACE(SCPluginInterface, "SCPluginInterface/0.2")

#endif // SCPLUGININTERFACE_H
