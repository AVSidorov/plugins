#ifndef HELLO_PLUGIN_H
#define HELLO_PLUGIN_H
#include <QObject>
#include <QtPlugin>
#include <helloPluginInterface.h>
       
class HelloPlugin : public QObject, public HelloPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID HelloPluginInterface_iid FILE pluginHello.json)
    Q_INTERFACES(HelloPluginInterface)

public:
    ~HelloPlugin() override {}
    void doSomething() override;
};
#endif // HELLO_PLUGIN_H