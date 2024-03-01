#include <MyWidget.h>

// ���������� ������������.
Circle::Circle(QWidget* parent)
{
	// ��������� ������������� ����.
	setParent(parent);
	// ���������� ���� ������ ������ ��� ��������� ������� ����� ������.
	greenColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\GreenCircle.png");
	yellowColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\YellowCircle.png");
	redColor = QPixmap("C:\\Users\\Leswa\\source\\repos\\RepeatWorkingWithWidgets\\Materials\\RedCircle.png");
	// ��������� �������� ����� �� ���������.
	currentColor = redColor;
	// ��������� �������������� ������� �������.
	setFixedSize(QSize(200, 250));
}
// ���������� ������ ���������.
void Circle::paintEvent(QPaintEvent* e)
{
	QPainter paintCirlce(this);
	paintCirlce.drawPixmap(e->rect(), currentColor);
}
// ���������� ������ ������������� ����������� ��������.
QSize Circle::minimumSizeHint() const
{
	return QSize(100, 100);
}

