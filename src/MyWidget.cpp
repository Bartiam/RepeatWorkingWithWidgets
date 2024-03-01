#include <MyWidget.h>

// Реализация конструктора.
Circle::Circle(QWidget* parent)
{
	// Установка родительского окна.
	setParent(parent);
	// Нахождение всех нужных файлов для отрисовки разного цвета кругов.
	// Установка текущего цвета по умолчанию.
	currentColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\GreenCircle.png");
	// Установка фиксированного размера виджета.
	setFixedSize(QSize(200, 250));
}
// Реализация метода отрисовки.
void Circle::paintEvent(QPaintEvent* e)
{
	QPainter paintCirlce(this);
	paintCirlce.drawPixmap(e->rect(), currentColor);
}
// Реализация метода возвращающего минимальное значение.
QSize Circle::minimumSizeHint() const
{
	return QSize(100, 100);
}

void Circle::setGreenColor() 
{
	currentColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\GreenCircle.png");
	update();
}

void Circle::setYellowColor()
{
	currentColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\YellowCircle.png");
	update();
}

void Circle::setRedColor() 
{
	currentColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\RedCircle.png");
	update();
}

