#include <QApplication>
#include <iostream>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	std::cout << "OH YEAH! " << std::endl;
	app.exec();
}
