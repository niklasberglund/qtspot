#ifndef SCITEMMODEL_H
#define SCITEMMODEL_H

#include <QStandardItemModel>

class SCItemModel : public QStandardItemModel
{
Q_OBJECT
public:
	SCItemModel(QObject *parent = 0);
signals:

public slots:

};

#endif // SCITEMMODEL_H
