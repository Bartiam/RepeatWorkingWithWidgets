#include <MyWidget.h>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	MyWidget myWidget(nullptr);
	myWidget.show();
	return app.exec();
}
