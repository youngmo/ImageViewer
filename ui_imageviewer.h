/********************************************************************************
** Form generated from reading UI file 'imageviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_H
#define UI_IMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewer
{
public:
    QAction *actionOpen;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionZoom_In_25;
    QAction *actionZoom_Out_25;
    QAction *actionNormal_Size;
    QAction *actionFit_to_Window;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *imageLabel;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageViewer)
    {
        if (ImageViewer->objectName().isEmpty())
            ImageViewer->setObjectName(QStringLiteral("ImageViewer"));
        ImageViewer->resize(800, 600);
        actionOpen = new QAction(ImageViewer);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionPrint = new QAction(ImageViewer);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionPrint->setCheckable(false);
        actionExit = new QAction(ImageViewer);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionZoom_In_25 = new QAction(ImageViewer);
        actionZoom_In_25->setObjectName(QStringLiteral("actionZoom_In_25"));
        actionZoom_Out_25 = new QAction(ImageViewer);
        actionZoom_Out_25->setObjectName(QStringLiteral("actionZoom_Out_25"));
        actionNormal_Size = new QAction(ImageViewer);
        actionNormal_Size->setObjectName(QStringLiteral("actionNormal_Size"));
        actionFit_to_Window = new QAction(ImageViewer);
        actionFit_to_Window->setObjectName(QStringLiteral("actionFit_to_Window"));
        actionFit_to_Window->setCheckable(true);
        actionFit_to_Window->setChecked(true);
        actionAbout = new QAction(ImageViewer);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(ImageViewer);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralWidget = new QWidget(ImageViewer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 700, 500));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 698, 498));
        imageLabel = new QLabel(scrollAreaWidgetContents);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setGeometry(QRect(10, 10, 700, 500));
        scrollArea->setWidget(scrollAreaWidgetContents);
        ImageViewer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageViewer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        ImageViewer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageViewer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageViewer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageViewer);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageViewer->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addAction(actionZoom_In_25);
        menuView->addAction(actionZoom_Out_25);
        menuView->addAction(actionNormal_Size);
        menuView->addSeparator();
        menuView->addAction(actionFit_to_Window);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(ImageViewer);

        QMetaObject::connectSlotsByName(ImageViewer);
    } // setupUi

    void retranslateUi(QMainWindow *ImageViewer)
    {
        ImageViewer->setWindowTitle(QApplication::translate("ImageViewer", "ImageViewer", 0));
        actionOpen->setText(QApplication::translate("ImageViewer", "&Open...", 0));
        actionOpen->setShortcut(QApplication::translate("ImageViewer", "Meta+O", 0));
        actionPrint->setText(QApplication::translate("ImageViewer", "&Print...", 0));
        actionPrint->setShortcut(QApplication::translate("ImageViewer", "Meta+P", 0));
        actionExit->setText(QApplication::translate("ImageViewer", "E&xit...", 0));
        actionExit->setShortcut(QApplication::translate("ImageViewer", "Meta+Q", 0));
        actionZoom_In_25->setText(QApplication::translate("ImageViewer", "Zoom In(25%)", 0));
        actionZoom_In_25->setShortcut(QApplication::translate("ImageViewer", "Meta+Shift+=", 0));
        actionZoom_Out_25->setText(QApplication::translate("ImageViewer", "Zoom Out(25%)", 0));
        actionZoom_Out_25->setShortcut(QApplication::translate("ImageViewer", "Meta+-", 0));
        actionNormal_Size->setText(QApplication::translate("ImageViewer", "Normal Size", 0));
        actionNormal_Size->setShortcut(QApplication::translate("ImageViewer", "Meta+S", 0));
        actionFit_to_Window->setText(QApplication::translate("ImageViewer", "Fit to Window", 0));
        actionFit_to_Window->setShortcut(QApplication::translate("ImageViewer", "Meta+F", 0));
        actionAbout->setText(QApplication::translate("ImageViewer", "About", 0));
        actionAbout_Qt->setText(QApplication::translate("ImageViewer", "About Qt", 0));
        imageLabel->setText(QApplication::translate("ImageViewer", "TextLabel", 0));
        menuFile->setTitle(QApplication::translate("ImageViewer", "File", 0));
        menuView->setTitle(QApplication::translate("ImageViewer", "View", 0));
        menuHelp->setTitle(QApplication::translate("ImageViewer", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageViewer: public Ui_ImageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
