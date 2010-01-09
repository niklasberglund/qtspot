#include "scwidget.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QSizePolicy>
#include <QHBoxLayout>
#include "scwidgettop.h"
#include "sctabbutton.h"
#include <QDebug>

SCWidget::SCWidget(QWidget *parent) :
	QFrame(parent)
{
	// style sheet
	this->setStyleSheet("SCWidget { background-color:#373737; border:1px solid #000000; }");

	// top
	top = new SCWidgetTop();


	// layout
	layout = new QVBoxLayout();
	this->content = new QFrame();
	this->content->setStyleSheet("QFrame { background-color:#2a2a2a; }");
	this->content->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
	layout->addWidget(top);
	layout->addWidget(this->content);
	layout->setMargin(0);
	layout->setSpacing(0);
	this->setLayout(layout);
}


void SCWidget::setWidget(QWidget *widget)
{
	this->content = widget;
	this->content->update(0, 0, 900, 900);
	this->layout->update();
	qDebug() << "receive";
}
