#include "MainUi.hpp"

void Monochromateur::MainUi::setupUi(QMainWindow *MonochromateurClass)
{
	// Association du nom de l'application � la fenetre :
    if (MonochromateurClass->objectName().isEmpty())
        MonochromateurClass->setObjectName(QStringLiteral("MonochromateurClass"));

	// Affectation de la taille par d�faut :
    MonochromateurClass->resize(600, 400);
	
	// Cr�ation du Menu Bar :
    menuBar = new QMenuBar(MonochromateurClass);
    menuBar->setObjectName(QStringLiteral("menuBar"));
    MonochromateurClass->setMenuBar(menuBar);

	// Cr�ation de la ToolBar :
	mainToolBar = new QToolBar(MonochromateurClass);
    mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
    MonochromateurClass->addToolBar(mainToolBar);
    
	// Cr�ation de la StatusBar ( barre du bas ) :
    statusBar = new QStatusBar(MonochromateurClass);
    statusBar->setObjectName(QStringLiteral("statusBar"));
    MonochromateurClass->setStatusBar(statusBar);

	// Cr�ation du conteneur central :
	mdiArea = new QMdiArea();
	MonochromateurClass->setCentralWidget(mdiArea);

    retranslateUi(MonochromateurClass);

} // setupUi

void Monochromateur::MainUi::retranslateUi(QMainWindow *MonochromateurClass)
{
    MonochromateurClass->setWindowTitle(QApplication::translate("MonochromateurClass", "Monochromateur", 0));
} // retranslateUi