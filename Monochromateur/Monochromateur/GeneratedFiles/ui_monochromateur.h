/********************************************************************************
** Form generated from reading UI file 'monochromateur.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

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

QT_BEGIN_NAMESPACE

class Ui_MonochromateurClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MonochromateurClass)
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
        centralWidget = new QWidget(MonochromateurClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MonochromateurClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MonochromateurClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MonochromateurClass->setStatusBar(statusBar);

        retranslateUi(MonochromateurClass);

        QMetaObject::connectSlotsByName(MonochromateurClass);
    } // setupUi

    void retranslateUi(QMainWindow *MonochromateurClass)
    {
        MonochromateurClass->setWindowTitle(QApplication::translate("MonochromateurClass", "Monochromateur", 0));
    } // retranslateUi

};

namespace Ui {
    class MonochromateurClass: public Ui_MonochromateurClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONOCHROMATEUR_H
