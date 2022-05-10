#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    model = new QFileSystemModel;
    model->setRootPath(root_path);

    ui->treeView->setModel(model);
    ui->listView->setModel(model);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_treeView_clicked(const QModelIndex &index)
{
    // auto treeViewCurrentIndex = ui->treeView->currentIndex();
    //ui->listView->setRootIndex(treeViewCurrentIndex);

    // we can use model index taken from treeView because it is the same model used in both views
    ui->listView->setRootIndex(index);
}

