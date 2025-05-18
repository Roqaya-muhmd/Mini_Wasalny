#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->addg_btn_2, &QPushButton::toggled,
            this, &MainWindow::on_addg_btn_1_toggled);
    connect(ui->delete_btn_2, &QPushButton::toggled,
            this, &MainWindow::on_delete_btn_1_toggled);
    connect(ui->addc_btn_2, &QPushButton::toggled,
            this, &MainWindow::on_addc_btn_1_toggled);
    connect(ui->update_btn_2, &QPushButton::toggled,
            this, &MainWindow::on_update_btn_1_toggled);

    connect(ui->deleteE_btn1, &QPushButton::toggled,
            this, &MainWindow::on_deleteE_btn_1_toggled);
    connect(ui->show_btn1, &QPushButton::toggled,
            this, &MainWindow::on_showGraph_btn_1_toggled);
    ui->icon_only_widget->hide();
    ui->stackedWidget->setCurrentIndex(0);
    ui->addg_btn_2->setChecked(true);

   ui->search_btn->setStyleSheet(
        "QPushButton[glass=\"true\"] {"
        "    background: rgba(255, 255, 255, 0.2);"
        "    border: 1px solid rgba(255, 255, 255, 0.3);"
        "    border-radius: 12px;"
        "    backdrop-filter: blur(10px);"
        "    color: white;"
        "    padding: 10px 20px;"
        "    font-size: 14px;"
        "}"
        );
    ui->search_btn->setProperty("glass", true);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_addg_btn_1_toggled(bool checked)
{
    if (checked)
        ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_delete_btn_1_toggled(bool checked)
{
    if (checked)
        ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_addc_btn_1_toggled(bool checked)
{
    if (checked)
        ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_update_btn_1_toggled(bool checked)
{
    if (checked)
        ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_upload_btn_1_toggled(bool checked)
{
    if (checked)
        ui->stackedWidget->setCurrentIndex(4);
}
void MainWindow::on_deleteE_btn_1_toggled(bool checked)
{
    if (checked)
        ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow::on_showGraph_btn_1_toggled(bool checked)
{
    if (checked)
        ui->stackedWidget->setCurrentIndex(6);
}


