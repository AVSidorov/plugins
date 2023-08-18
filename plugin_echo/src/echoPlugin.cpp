#include <QString>
#include "echoPlugin.h"

QString EchoPlugin::echo(QString msg){
    return QString("echo: ").append(msg);
}
