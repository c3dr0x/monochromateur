#ifndef MONOCHROMATEUR_H
#define MONOCHROMATEUR_H

#include <QtWidgets/QMainWindow>
#include "ui_monochromateur.h"

class Monochromateur : public QMainWindow
{
	Q_OBJECT

public:
	Monochromateur(QWidget *parent = 0);
	~Monochromateur();

private:
	Ui::MonochromateurClass ui;
};

#endif // MONOCHROMATEUR_H
