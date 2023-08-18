//
// Created by Developer on 18.08.2023.
//

#include "helloWidget.h"
#include "ui_helloWidget.h"


HelloWidget::HelloWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::HelloWidget) {
    ui->setupUi(this);
}

HelloWidget::~HelloWidget() {
    delete ui;
}
