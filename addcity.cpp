#include "addcity.h"
#include "ui_addcity.h"
#include <QGridLayout>  // For QGridLayout
#include "string"
#include "addgraph.h"
#include "File.h"
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

void AddCity::on_addCityConfirmButton_clicked(bool checked){
    std::string c1;
    QString message1;
    if(checked){
        if(ui->addCityNameLineEdit->text().isEmpty()){
            addgraph::waringlab(ui->waring_nameNotFound,"The city name is empty");
            qDebug() << "The city1 is empty";
            return;
        }else{
            ui->waring_nameNotFound->hide();
            CityGraph& shared=addgraph::getGraph();
            c1=ui->addCityNameLineEdit->text().toStdString();
           shared.addCity(c1);
            // message1=QString::fromStdString(addgraph::getGraph().addCity(c1));
            // ui->addCityNameLabel->setText(message1);
            qDebug() << "City found 1:" << shared.cityFound("jj");

            qDebug() << "City found 2:" << shared.cityFound("cairo");
            ui->addCityNameLineEdit->clear();
        }

    
    }
}
