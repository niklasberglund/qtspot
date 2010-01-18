#ifndef SCTABLEWIDGET_H
#define SCTABLEWIDGET_H

#include <QTableView>


class SCTableView : public QTableView
{
Q_OBJECT
public:
	SCTableView(int zebra = SCTableView::WithoutZebraRows, int horizontalLabels = SCTableView::WithHorizontalLabels, QWidget *parent = 0);

	// enums
	enum ZebraRows {WithoutZebraRows, WithZebraRows};
	enum HorizontalLabels {WithHorizontalLabels, WithoutHorizontalLabels};

private:
	QColor firstRowColor;
	QColor secondRowColor;

signals:

public slots:

};

#endif // SCTABLEWIDGET_H
