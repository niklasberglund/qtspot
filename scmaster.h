#ifndef SCMASTER_H
#define SCMASTER_H

#include <QWidget>
#include "scwidget.h"
#include "sctableview.h"


class SCMaster
{
public:
    SCMaster();

	// setters
	void setLeftWidget(SCWidget* widget);
	void setMainWidget(SCWidget *widget);
	void setBottomWidget(SCWidget *widget);


	// getters
	SCWidget* getLeftWidget();
	SCWidget *getMainWidget();
	SCWidget* getBottomWidget();

private:
	SCWidget *leftWidget;
	SCWidget *mainWidget;
	SCWidget *bottomWidget;
};

#endif // SCMASTER_H
