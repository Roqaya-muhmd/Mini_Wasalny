#include "addcity.h"
#include "ui_addcity.h"
#include <QGridLayout>  // For QGridLayout
#include "string"
#include "addgraph.h"
AddCity::AddCity(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddCity)
{
    ui->setupUi(this);
    ui->waring_nameNotFound->hide();
    connect(ui->addCityConfirmButton, &QPushButton::toggled,
            this,&AddCity::on_addCityConfirmButton_clicked);

}

AddCity::~AddCity()
{
    delete ui;
}
void AddCity::showEvent(QShowEvent *event) {
    QWidget::showEvent(event); // Call base class implementation

    ui->addCityNameLineEdit->clear();
     ui->waring_nameNotFound->hide();
    qDebug() << "Widget is now visible";

}

void AddCity::on_addCityConfirmButton_clicked(){
    if(addgraph::getisGraphInitialized()){
        std::string c1;
        QString message1;
        ui->waring_nameNotFound->hide();

        if(ui->addCityNameLineEdit->text().isEmpty()){
                addgraph::waringlab(ui->waring_nameNotFound,"The city name is empty");
                qDebug() << "The city1 is empty";
                return;
        }else{
                ui->waring_nameNotFound->hide();
                CityGraph& shared=addgraph::getGraph();
                c1=ui->addCityNameLineEdit->text().toStdString();
                // shared.addCity(c1);

                 message1=QString::fromStdString(shared.addCity(c1));
                addgraph::waringlab(ui->waring_nameNotFound,message1);
                // ui->addCityNameLabel->setText(message1);
                qDebug() << "City found 1:" << shared.cityFound("00p");
                qDebug() << "City found 2:" << shared.cityFound("cairo");

        }



    }else{
        addgraph::waringlab(ui->waring_nameNotFound,"you must add a graph first");
    }


}
