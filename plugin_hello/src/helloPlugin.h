#ifndef HELLO_PLUGIN_H
#define HELLO_PLUGIN_H
#include <QObject>
#include <QtPlugin>
#include "interfaces.h"
       
class HelloPlugin : public QObject, public HelloPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID HelloPluginInterface_iid FILE "helloPlugin.json")
    Q_INTERFACES(HelloPluginInterface)

public:
    void doSomething() override;
};

#endif // HELLO_PLUGIN_H