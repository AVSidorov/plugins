#include <QWidget>
#include "widgetPlugin.h"
#include "helloWidget.h"

QWidget* WidgetPlugin::mainWidget(QWidget *parent) {
    return new HelloWidget(parent);
}
