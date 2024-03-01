#include <MyWidget.h>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	QWidget* mainWindow = new QWidget;
	Circle* circle = new Circle(nullptr);
	QVBoxLayout* layout = new QVBoxLayout(mainWindow);
	QSlider* slider = new QSlider(Qt::Horizontal);
	layout->addWidget(circle);
	layout->addWidget(slider);
	QObject::connect(slider, &QSlider::valueChanged, [&circle, &slider](int value) 
		{
			if (value > 33 && value <= 66) { circle->setYellowColor(); }
			else if (value > 66 && value <= 100) { circle->setRedColor(); }
			else { circle->setGreenColor();}
		});

	mainWindow->show();
	return app.exec();
}
