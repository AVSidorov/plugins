#ifndef HELLO_PLUGIN_H
#define HELLO_PLUGIN_H
#include <QObject>
#include <QtPlugin>
#include "interfaces.h"
       
class WidgetPlugin : public QObject, public WidgetPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID WidgetPluginInterface_iid)
    Q_INTERFACES(WidgetPluginInterface)

public:
    QWidget* mainWidget(QWidget *parent);
};

#endif // HELLO_PLUGIN_H