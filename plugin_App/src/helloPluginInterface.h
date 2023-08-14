#ifndef HELLO_PLUGIN_INTERFACE
#define HELLO_PLUGIN_INTERFACE
#include <QtPlugin>

class HelloPluginInterface
{
public:
    virtual ~HelloPluginInterface();
    virtual void doSomething();
};

#define HelloPluginInterface_iid "com.opsira.HelloPluginInterface"
Q_DECLARE_INTERFACE(HelloPluginInterface, HelloPluginInterface_iid)

#endif // HELLO_PLUGIN_INTERFACE