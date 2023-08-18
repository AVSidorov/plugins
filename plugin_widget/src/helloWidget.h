//
// Created by Developer on 18.08.2023.
//

#ifndef PLUGIN_HELLOWIDGET_H
#define PLUGIN_HELLOWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class HelloWidget; }
QT_END_NAMESPACE

class HelloWidget : public QWidget {
Q_OBJECT

public:
    explicit HelloWidget(QWidget *parent = nullptr);

    ~HelloWidget() override;

private:
    Ui::HelloWidget *ui;
};


#endif //PLUGIN_HELLOWIDGET_H
