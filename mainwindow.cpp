#include "mainwindow.h"
#include    <QAction>
#include    <QMenuBar>
#include    <QToolBar>
#include    <QMessageBox>
#include    <QStatusBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("xsx");

    openAction = new QAction(QIcon(":/images/testImage"), tr("&Open..."), this);
    openAction->setShortcut(QKeySequence::Open);
    openAction->setStatusTip(tr("open an existing file"));
    connect(openAction, &QAction::triggered, this, &MainWindow::open);

    QMenu * file = menuBar()->addMenu(tr("&dile"));
    file->addAction(openAction);

    QToolBar *toolBar = addToolBar(tr("&File"));
        toolBar->addAction(openAction);

    statusBar();
}

MainWindow::~MainWindow()
{

}

void MainWindow::open()
{
    QMessageBox::information(this, tr("Information"), tr("Open"));
}
