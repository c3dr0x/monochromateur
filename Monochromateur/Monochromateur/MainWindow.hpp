#ifndef MONOCHROMATEUR_H
#define MONOCHROMATEUR_H

#include <QtWidgets/QMainWindow>
#include "MainUi.hpp"

namespace Monochromateur {

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	Monochromateur::MainUi ui;
};

}

#endif // MONOCHROMATEUR_H
