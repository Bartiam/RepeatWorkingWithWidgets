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
	// Конструктор по умолчанию.
	Circle() = default;
	// Конструктор принимающий родительское окно.
	Circle(QWidget* parent);
	// Переопределённый метод от QWidget.
	void paintEvent(QPaintEvent* e) override;
	// Переопределённый метод от QWidget;
	QSize minimumSizeHint() const override;


private:
	// Переменные для изменения цвета.
	QPixmap currentColor;
	QPixmap greenColor;
	QPixmap yellowColor;
	QPixmap redColor;
};