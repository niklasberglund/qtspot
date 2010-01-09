#ifndef SCMAINWINDOWSPLITTER_H
#define SCMAINWINDOWSPLITTER_H

#include <QSplitter>

class SCMainWindowSplitter : public QSplitter
{
Q_OBJECT
public:
	SCMainWindowSplitter(QWidget *parent = 0);
	void setMainWidget(QWidget *widget);

private:
	QWidget *mainWidget;

signals:

public slots:

};

#endif // SCMAINWINDOWSPLITTER_H
