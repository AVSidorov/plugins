#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "helloPluginInterface.h"

#include <assert.h>
#include <QDebug>
#include <QPluginLoader>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadPlugins();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadPlugins() {
//    const auto staticInstances = QPluginLoader::staticInstances();
//    for (QObject *plugin : staticInstances)
//        populateMenus(plugin);

    pluginsDir = QDir(QCoreApplication::applicationDirPath());

    pluginsDir.cd("opsira");

    const auto entryList = pluginsDir.entryList(QDir::Files);
    for (const QString &fileName : entryList) {
        assert(QLibrary::isLibrary(pluginsDir.absoluteFilePath(fileName)));
        QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = loader.instance();
        if (plugin) {
            auto iHello = qobject_cast<HelloPluginInterface *>(plugin);
            if (iHello)
                iHello -> doSomething();
                pluginFileNames += fileName;
        }
    }
}