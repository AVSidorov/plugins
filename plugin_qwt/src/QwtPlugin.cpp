#include <QWidget>
#include "QwtPlugin.h"
#include "PlotWindow.h"

QWidget* QwtPlugin::mainWidget(QWidget *parent) {
    return new PlotWindow(parent);
}
