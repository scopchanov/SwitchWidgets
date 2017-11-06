#include "WidgetA.h"
#include "WidgetB.h"
#include <QVBoxLayout>
#include <QPushButton>

WidgetA::WidgetA(QWidget *parent) : QWidget(parent)
{
	auto *layoutMain = new QVBoxLayout(this);
	auto *button = new QPushButton("Click me", this);

	layoutMain->addWidget(button);

	setAttribute(Qt::WA_DeleteOnClose);

	connect(button, &QPushButton::clicked, [this](){
		parentWidget()->layout()->addWidget(new WidgetB(parentWidget()));
		close();
	});
}

WidgetA::~WidgetA()
{
	qDebug("Widget A is gone");
}
