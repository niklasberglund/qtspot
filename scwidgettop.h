#ifndef SCWIDGETTOP_H
#define SCWIDGETTOP_H

#include <QWidget>
#include <QFrame>
#include <QHBoxLayout>

class SCWidgetTop : public QFrame
{
Q_OBJECT
public:
	SCWidgetTop(QWidget *parent = 0);
	void addWidget(QWidget *widget, int position);
	void insertSeparator();
	enum WidgetPosition { Left, Right };

private:
	QHBoxLayout *mainBoxLayout;
	QHBoxLayout *rightBoxLayout;
	QHBoxLayout *leftBoxLayout;

signals:

public slots:

};

#endif // SCWIDGETTOP_H
