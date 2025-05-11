/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
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
"#user_btn {\n"
"		border: none;\n"
"	}\n"
"#search_btn {\n"
"		border: none;\n"
"	}"));
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
        icon2.addFile(QString::fromUtf8(":/icon/icon/user-48.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        user_btn->setIcon(icon2);

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
        QFont font;
        font.setPointSize(20);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName("gridLayout_4");
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayout_5 = new QGridLayout(page_4);
        gridLayout_5->setObjectName("gridLayout_5");
        label_7 = new QLabel(page_4);
        label_7->setObjectName("label_7");
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayout_6 = new QGridLayout(page_5);
        gridLayout_6->setObjectName("gridLayout_6");
        label_8 = new QLabel(page_5);
        label_8->setObjectName("label_8");
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        gridLayout_7 = new QGridLayout(page_6);
        gridLayout_7->setObjectName("gridLayout_7");
        label_9 = new QLabel(page_6);
        label_9->setObjectName("label_9");
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_7->addWidget(label_9, 0, 0, 1, 1);

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

        verticalLayout_5->addWidget(stackedWidget);


        gridLayout->addWidget(widget_3, 0, 2, 1, 1);

        icon_only_widget = new QWidget(centralwidget);
        icon_only_widget->setObjectName("icon_only_widget");
        icon_only_widget->setStyleSheet(QString::fromUtf8("#icon_only_widget {background-color: #C1FFC1\n"
";\n"
"		width:50px;}\n"
"#icon_only_widget QPushButton, QLabel {\n"
"		height:50px;\n"
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


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 375, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        exit_btn_1 = new QPushButton(icon_only_widget);
        exit_btn_1->setObjectName("exit_btn_1");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/cancel-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        exit_btn_1->setIcon(icon8);
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


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 373, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        exit_btn_2 = new QPushButton(full_menu_widget);
        exit_btn_2->setObjectName("exit_btn_2");
        exit_btn_2->setIcon(icon8);
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

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        change_btn->setText(QString());
        search_btn->setText(QCoreApplication::translate("MainWindow", "Welcome to \331\210\330\265\331\204\331\206\331\212", nullptr));
        user_btn->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Dashboard Page", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Orders Page", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Product Page", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Customers Page", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Search Page", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "User Page", nullptr));
        logo_label_1->setText(QString());
        addg_btn_1->setText(QString());
        delete_btn_1->setText(QString());
        addc_btn_1->setText(QString());
        update_btn_1->setText(QString());
        upload_btn_1->setText(QString());
        exit_btn_1->setText(QString());
        logo_label_2->setText(QString());
        logo_label_3->setText(QCoreApplication::translate("MainWindow", "\331\210\330\265\331\204\331\206\331\212", nullptr));
        addg_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\243\330\257\330\256\331\204 \330\247\331\204\331\205\330\257\331\206", nullptr));
        delete_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\243\330\255\330\260\331\201 \330\247\331\204\331\205\330\257\331\206\331\212\330\251", nullptr));
        addc_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\243\330\266\331\212\331\201 \331\205\330\257\331\206\331\212\330\251", nullptr));
        update_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\252\330\271\330\257\331\212\331\204", nullptr));
        upload_btn_2->setText(QCoreApplication::translate("MainWindow", "\330\243\330\261\331\201\330\271 \330\247\331\204\331\205\330\257\331\206", nullptr));
        exit_btn_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
