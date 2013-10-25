#include "monochromateur.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Monochromateur w;
	w.show();
	return a.exec();
}
