#ifndef HELLO_PLUGIN_H
#define HELLO_PLUGIN_H
#include <QObject>
#include <QtPlugin>
#include "interfaces.h"
       
class EchoPlugin : public QObject, public EchoPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID EchoPluginInterface_iid)
    Q_INTERFACES(EchoPluginInterface)

public:
    QString echo(QString msg);
};

#endif // HELLO_PLUGIN_H