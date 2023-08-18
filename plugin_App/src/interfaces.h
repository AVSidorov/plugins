#ifndef HELLO_PLUGIN_INTERFACE
#define HELLO_PLUGIN_INTERFACE
#include <QtPlugin>

class HelloPluginInterface
{
public:
    virtual ~HelloPluginInterface() = default;
    virtual void doSomething() = 0;
};

class EchoPluginInterface
{
public:
    virtual ~EchoPluginInterface() = default;
    virtual QString echo(QString msg) = 0;
};

#define HelloPluginInterface_iid "com.opsira.HelloPluginInterface"
Q_DECLARE_INTERFACE(HelloPluginInterface, HelloPluginInterface_iid)

#define EchoPluginInterface_iid "com.opsira.EchoPluginInterface"
Q_DECLARE_INTERFACE(EchoPluginInterface, EchoPluginInterface_iid)

#endif // HELLO_PLUGIN_INTERFACE