#include "MainWindow.h"
#include "WidgetA.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent)
{
	auto *w = new QWidget(this);
	auto layoutMain = new QVBoxLayout(w);
	auto *widgetA = new WidgetA(w);

	layoutMain->addWidget(widgetA);

	setCentralWidget(w);
	resize(400, 400);
}
