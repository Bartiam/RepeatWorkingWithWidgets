#include <QApplication>
#include <QSlider>
#include <QWidget>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>
#include <QGridlayout>

class MyWidget : public QWidget
{
public:
	MyWidget() = default;
	MyWidget(QWidget* parent);

	void paintEvent(QPaintEvent* e) override;

private:
	QPixmap currentColor;
	QPixmap greenColor;
	QPixmap yellowColor;
	QPixmap redColor;
	QSlider* slider = new QSlider(Qt::Horizontal);
	QGridLayout* layout = new QGridLayout(this);
};