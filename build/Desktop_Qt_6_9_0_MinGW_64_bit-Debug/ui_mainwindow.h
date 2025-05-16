/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "addcity.h"
#include "addedge.h"
#include "addgraph.h"
#include "deletecity.h"
#include "deleteedge.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *change_btn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *search_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *user_btn;
    QStackedWidget *stackedWidget;
    addgraph *page;
    QGridLayout *gridLayout_2;
    DeleteCity *page_2;
    QGridLayout *gridLayout_3;
    AddCity *page_3;
    QGridLayout *gridLayout_4;
    AddEdge *page_4;
    QGridLayout *gridLayout_5;
    QWidget *page_5;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    DeleteEdge *page_6;
    QGridLayout *gridLayout_7;
    QWidget *page_7;
    QGridLayout *gridLayout_8;
    QLabel *label_10;
    QWidget *page_8;
    QLabel *label;
    QWidget *page_9;
    QLabel *label_2;
    QWidget *icon_only_widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *logo_label_1;
    QVBoxLayout *verticalLayout;
    QPushButton *addg_btn_1;
    QPushButton *delete_btn_1;
    QPushButton *addc_btn_1;
    QPushButton *update_btn_1;
    QPushButton *upload_btn_1;
    QPushButton *deleteE_btn2;
    QPushButton *show_btn2;
    QSpacerItem *verticalSpacer;
    QPushButton *exit_btn_1;
    QWidget *full_menu_widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo_label_2;
    QLabel *logo_label_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *addg_btn_2;
    QPushButton *delete_btn_2;
    QPushButton *addc_btn_2;
    QPushButton *update_btn_2;
    QPushButton *upload_btn_2;
    QPushButton *deleteE_btn1;
    QPushButton *show_btn1;
    QSpacerItem *verticalSpacer_2;
    QPushButton *exit_btn_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(649, 396);
        MainWindow->setStyleSheet(QString::fromUtf8("#widget {\n"
"		background-color: #f9fafd;\n"
"	}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 40));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 9, 0);
        change_btn = new QPushButton(widget);
        change_btn->setObjectName("change_btn");
        change_btn->setStyleSheet(QString::fromUtf8("#change_btn {\n"
"		padding: 5px;\n"
"		border: none;\n"
"		width: 30px;\n"
"		height: 30px;\n"
"	}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/activity-feed-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        change_btn->setIcon(icon);
        change_btn->setIconSize(QSize(14, 14));
        change_btn->setCheckable(true);

        horizontalLayout_4->addWidget(change_btn);

        horizontalSpacer = new QSpacerItem(236, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        search_btn = new QPushButton(widget);
        search_btn->setObjectName("search_btn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon/search-13-48.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        search_btn->setIcon(icon1);

        horizontalLayout->addWidget(search_btn);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(236, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        user_btn = new QPushButton(widget);
        user_btn->setObjectName("user_btn");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/user-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        user_btn->setIcon(icon2);
        user_btn->setCheckable(true);
        user_btn->setAutoExclusive(true);

        horizontalLayout_4->addWidget(user_btn);


        verticalLayout_5->addWidget(widget);

        stackedWidget = new QStackedWidget(widget_3);
        stackedWidget->setObjectName("stackedWidget");
        page = new addgraph();
        page->setObjectName("page");
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName("gridLayout_2");
        stackedWidget->addWidget(page);
        page_2 = new DeleteCity();
        page_2->setObjectName("page_2");
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName("gridLayout_3");
        stackedWidget->addWidget(page_2);
        page_3 = new AddCity();
        page_3->setObjectName("page_3");
        page_3->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName("gridLayout_4");
        stackedWidget->addWidget(page_3);
        page_4 = new AddEdge();
        page_4->setObjectName("page_4");
        gridLayout_5 = new QGridLayout(page_4);
        gridLayout_5->setObjectName("gridLayout_5");
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayout_6 = new QGridLayout(page_5);
        gridLayout_6->setObjectName("gridLayout_6");
        label_8 = new QLabel(page_5);
        label_8->setObjectName("label_8");
        QFont font;
        font.setPointSize(20);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new DeleteEdge();
        page_6->setObjectName("page_6");
        gridLayout_7 = new QGridLayout(page_6);
        gridLayout_7->setObjectName("gridLayout_7");
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        gridLayout_8 = new QGridLayout(page_7);
        gridLayout_8->setObjectName("gridLayout_8");
        label_10 = new QLabel(page_7);
        label_10->setObjectName("label_10");
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        label = new QLabel(page_8);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 120, 37, 16));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        label_2 = new QLabel(page_9);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 140, 37, 12));
        stackedWidget->addWidget(page_9);

        verticalLayout_5->addWidget(stackedWidget);


        gridLayout->addWidget(widget_3, 0, 2, 1, 1);

        icon_only_widget = new QWidget(centralwidget);
        icon_only_widget->setObjectName("icon_only_widget");
        icon_only_widget->setStyleSheet(QString::fromUtf8("#icon_only_widget {background-color: #C1FFC1\n"
";\n"
"		width:50px;}\n"
"#icon_only_widget QPushButton, QLabel {\n"
"		height:30px;\n"
"		border:none;\n"
"		/* border-bottom: 1px solid #b0b0b0; */\n"
"	}\n"
"\n"
"	#icon_only_widget QPushButton:hover {\n"
"		background-color: rgba( 86, 101, 115, 0.5);\n"
"	}\n"
"\n"
"	/* style for logo image */\n"
"	#logo_label_1 {\n"
"		padding: 5px\n"
"	}"));
        verticalLayout_3 = new QVBoxLayout(icon_only_widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        logo_label_1 = new QLabel(icon_only_widget);
        logo_label_1->setObjectName("logo_label_1");
        logo_label_1->setMinimumSize(QSize(50, 50));
        logo_label_1->setMaximumSize(QSize(50, 50));
        logo_label_1->setPixmap(QPixmap(QString::fromUtf8(":/icons/logoo.jpg")));
        logo_label_1->setScaledContents(true);

        horizontalLayout_3->addWidget(logo_label_1);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        addg_btn_1 = new QPushButton(icon_only_widget);
        addg_btn_1->setObjectName("addg_btn_1");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/add-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addg_btn_1->setIcon(icon3);
        addg_btn_1->setIconSize(QSize(14, 14));
        addg_btn_1->setCheckable(true);
        addg_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(addg_btn_1);

        delete_btn_1 = new QPushButton(icon_only_widget);
        delete_btn_1->setObjectName("delete_btn_1");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/trash-9-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        delete_btn_1->setIcon(icon4);
        delete_btn_1->setIconSize(QSize(14, 14));
        delete_btn_1->setCheckable(true);
        delete_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(delete_btn_1);

        addc_btn_1 = new QPushButton(icon_only_widget);
        addc_btn_1->setObjectName("addc_btn_1");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/add-row-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addc_btn_1->setIcon(icon5);
        addc_btn_1->setIconSize(QSize(14, 14));
        addc_btn_1->setCheckable(true);
        addc_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(addc_btn_1);

        update_btn_1 = new QPushButton(icon_only_widget);
        update_btn_1->setObjectName("update_btn_1");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/available-updates-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        update_btn_1->setIcon(icon6);
        update_btn_1->setIconSize(QSize(14, 14));
        update_btn_1->setCheckable(true);
        update_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(update_btn_1);

        upload_btn_1 = new QPushButton(icon_only_widget);
        upload_btn_1->setObjectName("upload_btn_1");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/upload-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        upload_btn_1->setIcon(icon7);
        upload_btn_1->setIconSize(QSize(14, 14));
        upload_btn_1->setCheckable(true);
        upload_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(upload_btn_1);

        deleteE_btn2 = new QPushButton(icon_only_widget);
        deleteE_btn2->setObjectName("deleteE_btn2");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/road-2-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deleteE_btn2->setIcon(icon8);
        deleteE_btn2->setCheckable(true);
        deleteE_btn2->setAutoExclusive(true);

        verticalLayout->addWidget(deleteE_btn2);

        show_btn2 = new QPushButton(icon_only_widget);
        show_btn2->setObjectName("show_btn2");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/mind-map-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        show_btn2->setIcon(icon9);
        show_btn2->setCheckable(true);
        show_btn2->setAutoExclusive(true);

        verticalLayout->addWidget(show_btn2);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 375, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        exit_btn_1 = new QPushButton(icon_only_widget);
        exit_btn_1->setObjectName("exit_btn_1");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/cancel-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        exit_btn_1->setIcon(icon10);
        exit_btn_1->setIconSize(QSize(14, 14));

        verticalLayout_3->addWidget(exit_btn_1);


        gridLayout->addWidget(icon_only_widget, 0, 0, 1, 1);

        full_menu_widget = new QWidget(centralwidget);
        full_menu_widget->setObjectName("full_menu_widget");
        full_menu_widget->setStyleSheet(QString::fromUtf8("#full_menu_widget {\n"
"		background-color: #C1FFC1;\n"
"	}\n"
"\n"
"	/* style for QPushButton */\n"
"	#full_menu_widget QPushButton {\n"
"		border:none;\n"
"		border-radius: 3px;\n"
"		text-align: left;\n"
"		padding: 8px 0 8px 15px;\n"
"		color: #788596;\n"
"	}\n"
"\n"
"	#full_menu_widget QPushButton:hover {\n"
"		background-color: rgba( 86, 101, 115, 0.5);\n"
"	}\n"
"\n"
"	#full_menu_widget QPushButton:checked {\n"
"		color: #fff;\n"
"	}\n"
"\n"
"	/* style for logo image */\n"
"	#logo_label_2 {\n"
"		padding: 5px;\n"
"		color: #fff;\n"
"	}\n"
"\n"
"	/* style for APP title */\n"
"	#logo_label_3 {\n"
"		padding-right: 10px;\n"
"		color: #788596;\n"
"	}"));
        verticalLayout_4 = new QVBoxLayout(full_menu_widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        logo_label_2 = new QLabel(full_menu_widget);
        logo_label_2->setObjectName("logo_label_2");
        logo_label_2->setMinimumSize(QSize(40, 40));
        logo_label_2->setMaximumSize(QSize(40, 40));
        logo_label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/logoo.jpg")));
        logo_label_2->setScaledContents(true);

        horizontalLayout_2->addWidget(logo_label_2);

        logo_label_3 = new QLabel(full_menu_widget);
        logo_label_3->setObjectName("logo_label_3");
        QFont font1;
        font1.setPointSize(15);
        logo_label_3->setFont(font1);

        horizontalLayout_2->addWidget(logo_label_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        addg_btn_2 = new QPushButton(full_menu_widget);
        addg_btn_2->setObjectName("addg_btn_2");
        addg_btn_2->setIcon(icon3);
        addg_btn_2->setIconSize(QSize(14, 14));
        addg_btn_2->setCheckable(true);
        addg_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(addg_btn_2);

        delete_btn_2 = new QPushButton(full_menu_widget);
        delete_btn_2->setObjectName("delete_btn_2");
        delete_btn_2->setIcon(icon4);
        delete_btn_2->setIconSize(QSize(14, 14));
        delete_btn_2->setCheckable(true);
        delete_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(delete_btn_2);

        addc_btn_2 = new QPushButton(full_menu_widget);
        addc_btn_2->setObjectName("addc_btn_2");
        addc_btn_2->setIcon(icon5);
        addc_btn_2->setIconSize(QSize(14, 14));
        addc_btn_2->setCheckable(true);
        addc_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(addc_btn_2);

        update_btn_2 = new QPushButton(full_menu_widget);
        update_btn_2->setObjectName("update_btn_2");
        update_btn_2->setIcon(icon6);
        update_btn_2->setIconSize(QSize(14, 14));
        update_btn_2->setCheckable(true);
        update_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(update_btn_2);

        upload_btn_2 = new QPushButton(full_menu_widget);
        upload_btn_2->setObjectName("upload_btn_2");
        upload_btn_2->setIcon(icon7);
        upload_btn_2->setIconSize(QSize(14, 14));
        upload_btn_2->setCheckable(true);
        upload_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(upload_btn_2);

        deleteE_btn1 = new QPushButton(full_menu_widget);
        deleteE_btn1->setObjectName("deleteE_btn1");
        deleteE_btn1->setIcon(icon4);
        deleteE_btn1->setCheckable(true);
        deleteE_btn1->setAutoExclusive(true);

        verticalLayout_2->addWidget(deleteE_btn1);

        show_btn1 = new QPushButton(full_menu_widget);
        show_btn1->setObjectName("show_btn1");
        show_btn1->setIcon(icon9);
        show_btn1->setCheckable(true);
        show_btn1->setAutoExclusive(true);

        verticalLayout_2->addWidget(show_btn1);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 373, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        exit_btn_2 = new QPushButton(full_menu_widget);
        exit_btn_2->setObjectName("exit_btn_2");
        exit_btn_2->setIcon(icon10);
        exit_btn_2->setIconSize(QSize(14, 14));

        verticalLayout_4->addWidget(exit_btn_2);


        gridLayout->addWidget(full_menu_widget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(exit_btn_1, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(change_btn, &QPushButton::toggled, icon_only_widget, &QWidget::setVisible);
        QObject::connect(addg_btn_2, &QPushButton::toggled, addg_btn_1, &QPushButton::setChecked);
        QObject::connect(delete_btn_2, &QPushButton::toggled, delete_btn_1, &QPushButton::setChecked);
        QObject::connect(upload_btn_1, &QPushButton::toggled, upload_btn_2, &QPushButton::setChecked);
        QObject::connect(change_btn, &QPushButton::toggled, full_menu_widget, &QWidget::setHidden);
        QObject::connect(exit_btn_2, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(update_btn_1, &QPushButton::toggled, update_btn_2, &QPushButton::setChecked);
        QObject::connect(delete_btn_1, &QPushButton::toggled, delete_btn_2, &QPushButton::setChecked);
        QObject::connect(addg_btn_1, &QPushButton::toggled, addg_btn_2, &QPushButton::setChecked);
        QObject::connect(addc_btn_1, &QPushButton::toggled, addc_btn_2, &QPushButton::setChecked);
        QObject::connect(addc_btn_2, &QPushButton::toggled, addc_btn_1, &QPushButton::setChecked);
        QObject::connect(update_btn_2, &QPushButton::toggled, update_btn_1, &QPushButton::setChecked);
        QObject::connect(upload_btn_2, &QPushButton::toggled, upload_btn_1, &QPushButton::setChecked);
        QObject::connect(deleteE_btn1, &QPushButton::toggled, deleteE_btn2, &QPushButton::setChecked);
        QObject::connect(deleteE_btn2, &QPushButton::toggled, deleteE_btn1, &QPushButton::setChecked);
        QObject::connect(show_btn2, &QPushButton::toggled, show_btn1, &QPushButton::setChecked);
        QObject::connect(show_btn1, &QPushButton::toggled, show_btn2, &QPushButton::setChecked);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        change_btn->setText(QString());
        search_btn->setText(QCoreApplication::translate("MainWindow", "Welcome to \331\210\330\265\331\204\331\206\331\212", nullptr));
        user_btn->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Customers Page", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "User Page", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "page 8", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "page 9", nullptr));
        logo_label_1->setText(QString());
        addg_btn_1->setText(QString());
        delete_btn_1->setText(QString());
        addc_btn_1->setText(QString());
        update_btn_1->setText(QString());
        upload_btn_1->setText(QString());
        deleteE_btn2->setText(QString());
        show_btn2->setText(QString());
        exit_btn_1->setText(QString());
        logo_label_2->setText(QString());
        logo_label_3->setText(QCoreApplication::translate("MainWindow", "\331\210\330\265\331\204\331\206\331\212", nullptr));
        addg_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\243\330\257\330\256\331\204 \330\247\331\204\331\205\330\257\331\206", nullptr));
        delete_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\243\330\255\330\260\331\201 \330\247\331\204\331\205\330\257\331\206\331\212\330\251", nullptr));
        addc_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\243\330\266\331\212\331\201 \331\205\330\257\331\206\331\212\330\251", nullptr));
        update_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\271\330\257\331\204 \330\247\331\204\330\267\330\261\331\212\331\202", nullptr));
        upload_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\243\330\261\331\201\330\271 \330\247\331\204\331\205\330\257\331\206", nullptr));
        deleteE_btn1->setText(QCoreApplication::translate("MainWindow", "\330\243\330\255\330\260\331\201 \330\267\330\261\331\212\331\202", nullptr));
        show_btn1->setText(QCoreApplication::translate("MainWindow", "Show Graph", nullptr));
        exit_btn_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
