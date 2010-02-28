#ifndef SCPLUGININTERFACE_H
#define SCPLUGININTERFACE_H

#include "scmastercontroller.h"

class SCPluginInterface
{
	/*
	empty at the moment. might want to have functions that returns name and description of the plugin etc in here.. in the future...
	so plugins should use this interface
	*/
public:
	SCPluginInterface(SCMasterController*){};
};


Q_DECLARE_INTERFACE(SCPluginInterface, "SCPluginInterface/0.1")

#endif // SCPLUGININTERFACE_H
