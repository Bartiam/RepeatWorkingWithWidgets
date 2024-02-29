#include <MyWidget.h>

MyWidget::MyWidget(QWidget* parent)
{
	setParent(parent);
	setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	greenColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\GreenCircle.png");
	yellowColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\YellowCircle.png");
	redColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\RedCircle.png");
	currentColor = greenColor;
	setGeometry(currentColor.rect());
	slider->setMinimum(0);
	slider->setMaximum(100);
	layout->addWidget(slider, 0, 2);
}

void MyWidget::paintEvent(QPaintEvent* e)
{
	QPainter paintCirlce(this);
	paintCirlce.drawPixmap(e->rect(), currentColor);
}

