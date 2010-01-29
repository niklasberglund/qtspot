#ifndef SCTABLEWIDGET_H
#define SCTABLEWIDGET_H

#include <QTableView>
#include "scitemmodel.h"


class SCTableView : public QTableView
{
Q_OBJECT
public:
	SCTableView(QWidget *parent = 0, SCItemModel *useItemModel = 0, int zebra = SCTableView::WithoutZebraRows, int horizontalLabels = SCTableView::WithHorizontalLabels);

	// enums
	enum ZebraRows {WithoutZebraRows, WithZebraRows};
	enum HorizontalLabels {WithHorizontalLabels, WithoutHorizontalLabels};

private:
	SCItemModel *tableItemModel;
	QColor firstRowColor;
	QColor secondRowColor;

signals:

public slots:

};

#endif // SCTABLEWIDGET_H
