#include "WidgetB.h"
#include <QVBoxLayout>
#include <QLabel>

WidgetB::WidgetB(QWidget *parent) : QWidget(parent)
{
	auto *layoutMain = new QVBoxLayout(this);

	layoutMain->addWidget(new QLabel("Success!", this));
}
