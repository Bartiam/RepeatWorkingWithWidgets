#include <QApplication>
#include <QSlider>
#include <QWidget>
#include <QPixmap>

class MyWidget : public QWidget
{
public:
	MyWidget() = default;

	void setGreenColor();
	void setYellowColor();
	void setRedColor();
	
private:
	QPixmap currentColor;
};

class MySlider : public QSlider
{

};