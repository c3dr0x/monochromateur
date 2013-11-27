#ifndef UI_MONOCHROMATEUR_H
#define UI_MONOCHROMATEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <QtWidgets/QMdiArea>
#include <QTextEdit>

QT_BEGIN_NAMESPACE

namespace Monochromateur 
{
	// =================================================================================
	//	Class "MainUi"
	//  Description :	classe reprsentant l'interface de l'application.
	//  ================================================================================
	class MainUi
	{
		public:
			QMenuBar *menuBar;
			QToolBar *mainToolBar;
			QWidget *centralWidget;
			QStatusBar *statusBar;
			QMdiArea *mdiArea;

			//	==================================================================================
			//	M�thode "setupUi"	
			//  Param�tre "QMainWindow : classe principal du projet."	
			//	Description :	Permet de cr�er l'affichage principal du projet,	
			//					ajout et positionnement des diff�rents composants.	
			//	==================================================================================
			void setupUi(QMainWindow *MonochromateurClass);

			//	==================================================================================
			//	M�thode "retranslateUi"	
			//  Param�tre "QMainWindow : classe principal du projet."	
			//	Description :	Permet de traduire le nom du projet pour son affichage.
			//	==================================================================================
			void retranslateUi(QMainWindow *MonochromateurClass);

	};

} // Namespace Monochromateur


QT_END_NAMESPACE

#endif // UI_MONOCHROMATEUR_H
