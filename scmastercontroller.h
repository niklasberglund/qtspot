#ifndef SCMASTER_H
#define SCMASTER_H

#include <QWidget>
#include "scwidget.h"
#include "sctableview.h"


class SCMasterController
{
public:
	SCMasterController();

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


signals:
	void mainWidgetChanged();


public slots:
	void changeMainWidget(SCWidget *widget);
};

#endif // SCMASTER_H
