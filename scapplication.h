#ifndef SCAPPLICATION_H
#define SCAPPLICATION_H

#include <QApplication>

class SCApplication : public QApplication
{
public:
	SCApplication(int & argc, char** argv);
};

#endif // SCAPPLICATION_H
