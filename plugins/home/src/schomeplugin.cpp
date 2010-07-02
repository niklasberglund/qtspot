#include "schomeplugin.h"
#include <QDebug>
//#include "scplaylistitemmodel.h" // for a test


/*SCHomePlugin::SCHomePlugin(SCMasterController *masterController)
{

}*/


/*QList<SCItemModel*> SCHomePlugin::getLeftMenuItemModels()
{
	//SCPlaylistItemModel *itemModelTest = new SCPlaylistItemModel();
	qDebug() << "called function getLeftMenuItemModels() in the home plugin";

	return QList<SCItemModel*>();
}*/


QString SCHomePlugin::getName()
{
	return "Home plugin";
}


Q_EXPORT_PLUGIN2(sc_homeplugin, SCHomePlugin)

