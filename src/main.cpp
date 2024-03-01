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
	mainWindow->show();
	return app.exec();
}
