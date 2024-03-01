#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QSlider>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>

class Circle : public QWidget
{
public:
	// ����������� �� ���������.
	Circle() = default;
	// ����������� ����������� ������������ ����.
	Circle(QWidget* parent);
	// ��������������� ����� �� QWidget.
	void paintEvent(QPaintEvent* e) override;
	// ��������������� ����� �� QWidget;
	QSize minimumSizeHint() const override;


private:
	// ���������� ��� ��������� �����.
	QPixmap currentColor;
	QPixmap greenColor;
	QPixmap yellowColor;
	QPixmap redColor;
};