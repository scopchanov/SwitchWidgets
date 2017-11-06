#ifndef WIDGETA_H
#define WIDGETA_H

#include <QWidget>

class WidgetA : public QWidget
{
	Q_OBJECT
public:
	explicit WidgetA(QWidget *parent = nullptr);
	~WidgetA();
};

#endif // WIDGETA_H
