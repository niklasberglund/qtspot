#ifndef SCAPPLICATION_H
#define SCAPPLICATION_H

#include <QApplication>
#include "scsettings.h"


class SCApplication : public QApplication
{
public:
	SCApplication(int & argc, char** argv);

private:
};

#endif // SCAPPLICATION_H
