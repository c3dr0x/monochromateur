#include "MainUi.hpp"

void Monochromateur::MainUi::setupUi(QMainWindow *MonochromateurClass)
{
	
    if (MonochromateurClass->objectName().isEmpty())
        MonochromateurClass->setObjectName(QStringLiteral("MonochromateurClass"));
    MonochromateurClass->resize(600, 400);
    menuBar = new QMenuBar(MonochromateurClass);
    menuBar->setObjectName(QStringLiteral("menuBar"));
    MonochromateurClass->setMenuBar(menuBar);
    
	mainToolBar = new QToolBar(MonochromateurClass);
    mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
    MonochromateurClass->addToolBar(mainToolBar);
    
    statusBar = new QStatusBar(MonochromateurClass);
    statusBar->setObjectName(QStringLiteral("statusBar"));
    MonochromateurClass->setStatusBar(statusBar);

	mdiArea = new QMdiArea;
	MonochromateurClass->setCentralWidget(mdiArea);

    retranslateUi(MonochromateurClass);

	QTextEdit *zoneTexte1 = new QTextEdit;
    QTextEdit *zoneTexte2 = new QTextEdit;

    QMdiSubWindow *sousFenetre1 = mdiArea->addSubWindow(zoneTexte1);
    QMdiSubWindow *sousFenetre2 = mdiArea->addSubWindow(zoneTexte2);

    QMetaObject::connectSlotsByName(MonochromateurClass);
} // setupUi

void Monochromateur::MainUi::retranslateUi(QMainWindow *MonochromateurClass)
{
    MonochromateurClass->setWindowTitle(QApplication::translate("MonochromateurClass", "Monochromateur", 0));
} // retranslateUi