#ifndef QWT_PLUGIN_H
#define QWT_PLUGIN_H
#include <QObject>
#include <QtPlugin>
#include "interfaces.h"
       
class QwtPlugin : public QObject, public WidgetPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID WidgetPluginInterface_iid)
    Q_INTERFACES(WidgetPluginInterface)

public:
    QWidget* mainWidget(QWidget *parent);
};

#endif // QWT_PLUGIN_H