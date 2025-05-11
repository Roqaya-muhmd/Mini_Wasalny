/********************************************************************************
** Form generated from reading UI file 'sidebar.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEBAR_H
#define UI_SIDEBAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *icon_only_widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *logo_label_1;
    QVBoxLayout *verticalLayout;
    QPushButton *home_btn_1;
    QPushButton *dashborad_btn_1;
    QPushButton *orders_btn_1;
    QPushButton *products_btn_1;
    QPushButton *customers_btn_1;
    QSpacerItem *verticalSpacer;
    QPushButton *exit_btn_1;
    QWidget *full_menu_widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo_label_2;
    QLabel *logo_label_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *home_btn_2;
    QPushButton *dashborad_btn_2;
    QPushButton *orders_btn_2;
    QPushButton *products_btn_2;
    QPushButton *customers_btn_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *exit_btn_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *change_btn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *search_input;
    QPushButton *search_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *user_btn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QWidget *page_4;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QWidget *page_5;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QWidget *page_6;
    QGridLayout *gridLayout_7;
    QLabel *label_9;
    QWidget *page_7;
    QGridLayout *gridLayout_8;
    QLabel *label_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(950, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        icon_only_widget = new QWidget(centralwidget);
        icon_only_widget->setObjectName("icon_only_widget");
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
        logo_label_1->setPixmap(QPixmap(QString::fromUtf8(":/icon/icon/Logo.png")));
        logo_label_1->setScaledContents(true);

        horizontalLayout_3->addWidget(logo_label_1);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        home_btn_1 = new QPushButton(icon_only_widget);
        home_btn_1->setObjectName("home_btn_1");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon/home-4-32.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon.addFile(QString::fromUtf8(":/icon/icon/home-4-48.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        home_btn_1->setIcon(icon);
        home_btn_1->setIconSize(QSize(20, 20));
        home_btn_1->setCheckable(true);
        home_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(home_btn_1);

        dashborad_btn_1 = new QPushButton(icon_only_widget);
        dashborad_btn_1->setObjectName("dashborad_btn_1");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon/dashboard-5-32.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon1.addFile(QString::fromUtf8(":/icon/icon/dashboard-5-48.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        dashborad_btn_1->setIcon(icon1);
        dashborad_btn_1->setIconSize(QSize(20, 20));
        dashborad_btn_1->setCheckable(true);
        dashborad_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(dashborad_btn_1);

        orders_btn_1 = new QPushButton(icon_only_widget);
        orders_btn_1->setObjectName("orders_btn_1");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icon/activity-feed-32.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon2.addFile(QString::fromUtf8(":/icon/icon/activity-feed-48.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        orders_btn_1->setIcon(icon2);
        orders_btn_1->setIconSize(QSize(20, 20));
        orders_btn_1->setCheckable(true);
        orders_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(orders_btn_1);

        products_btn_1 = new QPushButton(icon_only_widget);
        products_btn_1->setObjectName("products_btn_1");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icon/product-32.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon3.addFile(QString::fromUtf8(":/icon/icon/product-48.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        products_btn_1->setIcon(icon3);
        products_btn_1->setIconSize(QSize(20, 20));
        products_btn_1->setCheckable(true);
        products_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(products_btn_1);

        customers_btn_1 = new QPushButton(icon_only_widget);
        customers_btn_1->setObjectName("customers_btn_1");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icon/group-32.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon4.addFile(QString::fromUtf8(":/icon/icon/group-48.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        customers_btn_1->setIcon(icon4);
        customers_btn_1->setIconSize(QSize(20, 20));
        customers_btn_1->setCheckable(true);
        customers_btn_1->setAutoExclusive(true);

        verticalLayout->addWidget(customers_btn_1);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 375, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        exit_btn_1 = new QPushButton(icon_only_widget);
        exit_btn_1->setObjectName("exit_btn_1");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/icon/close-window-64.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        exit_btn_1->setIcon(icon5);
        exit_btn_1->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(exit_btn_1);


        gridLayout->addWidget(icon_only_widget, 0, 0, 1, 1);

        full_menu_widget = new QWidget(centralwidget);
        full_menu_widget->setObjectName("full_menu_widget");
        verticalLayout_4 = new QVBoxLayout(full_menu_widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        logo_label_2 = new QLabel(full_menu_widget);
        logo_label_2->setObjectName("logo_label_2");
        logo_label_2->setMinimumSize(QSize(40, 40));
        logo_label_2->setMaximumSize(QSize(40, 40));
        logo_label_2->setPixmap(QPixmap(QString::fromUtf8(":/icon/icon/Logo.png")));
        logo_label_2->setScaledContents(true);

        horizontalLayout_2->addWidget(logo_label_2);

        logo_label_3 = new QLabel(full_menu_widget);
        logo_label_3->setObjectName("logo_label_3");
        QFont font;
        font.setPointSize(15);
        logo_label_3->setFont(font);

        horizontalLayout_2->addWidget(logo_label_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        home_btn_2 = new QPushButton(full_menu_widget);
        home_btn_2->setObjectName("home_btn_2");
        home_btn_2->setIcon(icon);
        home_btn_2->setIconSize(QSize(14, 14));
        home_btn_2->setCheckable(true);
        home_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(home_btn_2);

        dashborad_btn_2 = new QPushButton(full_menu_widget);
        dashborad_btn_2->setObjectName("dashborad_btn_2");
        dashborad_btn_2->setIcon(icon1);
        dashborad_btn_2->setIconSize(QSize(14, 14));
        dashborad_btn_2->setCheckable(true);
        dashborad_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(dashborad_btn_2);

        orders_btn_2 = new QPushButton(full_menu_widget);
        orders_btn_2->setObjectName("orders_btn_2");
        orders_btn_2->setIcon(icon2);
        orders_btn_2->setIconSize(QSize(14, 14));
        orders_btn_2->setCheckable(true);
        orders_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(orders_btn_2);

        products_btn_2 = new QPushButton(full_menu_widget);
        products_btn_2->setObjectName("products_btn_2");
        products_btn_2->setIcon(icon3);
        products_btn_2->setIconSize(QSize(14, 14));
        products_btn_2->setCheckable(true);
        products_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(products_btn_2);

        customers_btn_2 = new QPushButton(full_menu_widget);
        customers_btn_2->setObjectName("customers_btn_2");
        customers_btn_2->setIcon(icon4);
        customers_btn_2->setIconSize(QSize(14, 14));
        customers_btn_2->setCheckable(true);
        customers_btn_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(customers_btn_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 373, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        exit_btn_2 = new QPushButton(full_menu_widget);
        exit_btn_2->setObjectName("exit_btn_2");
        exit_btn_2->setIcon(icon5);
        exit_btn_2->setIconSize(QSize(14, 14));

        verticalLayout_4->addWidget(exit_btn_2);


        gridLayout->addWidget(full_menu_widget, 0, 1, 1, 1);

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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/icon/menu-4-32.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        change_btn->setIcon(icon6);
        change_btn->setIconSize(QSize(14, 14));
        change_btn->setCheckable(true);

        horizontalLayout_4->addWidget(change_btn);

        horizontalSpacer = new QSpacerItem(236, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        search_input = new QLineEdit(widget);
        search_input->setObjectName("search_input");

        horizontalLayout->addWidget(search_input);

        search_btn = new QPushButton(widget);
        search_btn->setObjectName("search_btn");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/icon/search-13-48.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        search_btn->setIcon(icon7);

        horizontalLayout->addWidget(search_btn);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(236, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        user_btn = new QPushButton(widget);
        user_btn->setObjectName("user_btn");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/icon/user-48.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        user_btn->setIcon(icon8);

        horizontalLayout_4->addWidget(user_btn);


        verticalLayout_5->addWidget(widget);

        stackedWidget = new QStackedWidget(widget_3);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setPointSize(20);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName("gridLayout_4");
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayout_5 = new QGridLayout(page_4);
        gridLayout_5->setObjectName("gridLayout_5");
        label_7 = new QLabel(page_4);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayout_6 = new QGridLayout(page_5);
        gridLayout_6->setObjectName("gridLayout_6");
        label_8 = new QLabel(page_5);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        gridLayout_7 = new QGridLayout(page_6);
        gridLayout_7->setObjectName("gridLayout_7");
        label_9 = new QLabel(page_6);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_9, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        gridLayout_8 = new QGridLayout(page_7);
        gridLayout_8->setObjectName("gridLayout_8");
        label_10 = new QLabel(page_7);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);

        stackedWidget->addWidget(page_7);

        verticalLayout_5->addWidget(stackedWidget);


        gridLayout->addWidget(widget_3, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(change_btn, &QPushButton::toggled, icon_only_widget, &QWidget::setVisible);
        QObject::connect(change_btn, &QPushButton::toggled, full_menu_widget, &QWidget::setHidden);
        QObject::connect(home_btn_1, &QPushButton::toggled, home_btn_2, &QPushButton::setChecked);
        QObject::connect(dashborad_btn_1, &QPushButton::toggled, dashborad_btn_2, &QPushButton::setChecked);
        QObject::connect(orders_btn_1, &QPushButton::toggled, orders_btn_2, &QPushButton::setChecked);
        QObject::connect(products_btn_1, &QPushButton::toggled, products_btn_2, &QPushButton::setChecked);
        QObject::connect(customers_btn_1, &QPushButton::toggled, customers_btn_2, &QPushButton::setChecked);
        QObject::connect(home_btn_2, &QPushButton::toggled, home_btn_1, &QPushButton::setChecked);
        QObject::connect(dashborad_btn_2, &QPushButton::toggled, dashborad_btn_1, &QPushButton::setChecked);
        QObject::connect(orders_btn_2, &QPushButton::toggled, orders_btn_1, &QPushButton::setChecked);
        QObject::connect(products_btn_2, &QPushButton::toggled, products_btn_1, &QPushButton::setChecked);
        QObject::connect(customers_btn_2, &QPushButton::toggled, customers_btn_1, &QPushButton::setChecked);
        QObject::connect(exit_btn_2, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(exit_btn_1, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logo_label_1->setText(QString());
        home_btn_1->setText(QString());
        dashborad_btn_1->setText(QString());
        orders_btn_1->setText(QString());
        products_btn_1->setText(QString());
        customers_btn_1->setText(QString());
        exit_btn_1->setText(QString());
        logo_label_2->setText(QString());
        logo_label_3->setText(QCoreApplication::translate("MainWindow", "Sidebar", nullptr));
        home_btn_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        dashborad_btn_2->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        orders_btn_2->setText(QCoreApplication::translate("MainWindow", "Orders", nullptr));
        products_btn_2->setText(QCoreApplication::translate("MainWindow", "Products", nullptr));
        customers_btn_2->setText(QCoreApplication::translate("MainWindow", "Customers", nullptr));
        exit_btn_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        change_btn->setText(QString());
        search_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
        search_btn->setText(QString());
        user_btn->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Dashboard Page", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Orders Page", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Product Page", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Customers Page", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Search Page", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "User Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEBAR_H
