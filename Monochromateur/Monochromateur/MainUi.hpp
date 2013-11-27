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

namespace Monochromateur {

class MainUi
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;
	QMdiArea *mdiArea;

    void setupUi(QMainWindow *MonochromateurClass);

    void retranslateUi(QMainWindow *MonochromateurClass);

};

} // Namespace Monochromateur


QT_END_NAMESPACE

#endif // UI_MONOCHROMATEUR_H
