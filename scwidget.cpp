#include "scwidget.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QSizePolicy>

SCWidget::SCWidget(QWidget *parent) :
	QFrame(parent)
{
	// style sheet
	this->setStyleSheet("SCWidget { background-color:#373737; border:1px solid #000000; }");

	// top
	top = new QFrame();
	top->setStyleSheet("QFrame { background-image:url(:/topgradient.png); background-repeat:repeat-x; }");
	top->setMinimumHeight(21);

	// layout
	QVBoxLayout *layout = new QVBoxLayout();
	QTextEdit *test2 = new QTextEdit();
	//test2->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
	layout->addWidget(top);
	layout->addWidget(test2);
	layout->setMargin(0);
	this->setLayout(layout);
}
