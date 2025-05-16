/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *icon_only_widget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QWidget *full_menu_widget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QWidget *widget_2;
    QPushButton *pushButton_12;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_11;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1107, 574);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        icon_only_widget = new QWidget(centralwidget);
        icon_only_widget->setObjectName("icon_only_widget");
        icon_only_widget->setGeometry(QRect(0, 0, 81, 391));
        verticalLayout_5 = new QVBoxLayout(icon_only_widget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(icon_only_widget);
        label_4->setObjectName("label_4");
        QFont font;
        font.setBold(true);
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_4 = new QPushButton(icon_only_widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add-row-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setCheckable(true);
        pushButton_4->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(icon_only_widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/available-updates-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setCheckable(true);
        pushButton_3->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(icon_only_widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/trash-9-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setCheckable(true);
        pushButton_2->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(icon_only_widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/upload-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setCheckable(true);
        pushButton_5->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton_5);

        pushButton = new QPushButton(icon_only_widget);
        pushButton->setObjectName("pushButton");
        pushButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/add-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon4);
        pushButton->setCheckable(true);
        pushButton->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 208, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        label = new QLabel(icon_only_widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(50, 50));
        label->setMaximumSize(QSize(50, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/logoo.jpg")));
        label->setScaledContents(true);

        verticalLayout_5->addWidget(label);

        full_menu_widget = new QWidget(centralwidget);
        full_menu_widget->setObjectName("full_menu_widget");
        full_menu_widget->setGeometry(QRect(80, 0, 141, 364));
        verticalLayout_6 = new QVBoxLayout(full_menu_widget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(full_menu_widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(25, 25));
        label_2->setMaximumSize(QSize(25, 25));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/logoo.jpg")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(full_menu_widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton_7 = new QPushButton(full_menu_widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setFont(font);
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(9, 9));
        pushButton_7->setCheckable(true);
        pushButton_7->setAutoExclusive(true);

        verticalLayout_4->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(full_menu_widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font);
        pushButton_6->setIcon(icon4);
        pushButton_6->setCheckable(true);
        pushButton_6->setAutoExclusive(true);

        verticalLayout_4->addWidget(pushButton_6);

        pushButton_10 = new QPushButton(full_menu_widget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setFont(font);
        pushButton_10->setIcon(icon3);
        pushButton_10->setIconSize(QSize(10, 10));
        pushButton_10->setCheckable(true);
        pushButton_10->setAutoExclusive(true);

        verticalLayout_4->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(full_menu_widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setFont(font);
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(10, 10));
        pushButton_9->setCheckable(true);
        pushButton_9->setAutoExclusive(true);

        verticalLayout_4->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(full_menu_widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setFont(font);
        pushButton_8->setIcon(icon1);
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);

        verticalLayout_4->addWidget(pushButton_8);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 168, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        label_5 = new QLabel(full_menu_widget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(50, 50));
        label_5->setMaximumSize(QSize(50, 50));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icons/logoo.jpg")));
        label_5->setScaledContents(true);

        verticalLayout_6->addWidget(label_5);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(280, 0, 881, 521));
        pushButton_12 = new QPushButton(widget_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(820, 0, 56, 18));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/activity-feed-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_12->setIcon(icon5);
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 786, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setIcon(icon5);
        pushButton_11->setCheckable(true);
        pushButton_11->setAutoExclusive(true);

        horizontalLayout_3->addWidget(pushButton_11);

        horizontalSpacer = new QSpacerItem(758, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_11, &QPushButton::toggled, icon_only_widget, &QWidget::setVisible);
        QObject::connect(pushButton_11, &QPushButton::toggled, full_menu_widget, &QWidget::setHidden);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\331\210\330\265\331\204\331\206\331\212 \331\212\330\247 \330\271\331\205", nullptr));
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        pushButton_5->setText(QString());
        pushButton->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\331\210\330\265\331\204\331\206\331\212 \331\212\330\247 \330\271\331\205", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\330\243\330\255\330\260\331\201 \330\247\331\204\331\205\330\257\331\206\331\212\331\207", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\330\243\330\257\330\256\331\204 \330\247\331\204\331\205\330\257\331\206", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\330\243\330\261\331\201\330\271 \330\247\331\204\331\205\330\257\331\206", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\330\243\330\266\331\201 \331\205\330\257\331\206\331\212\330\251", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\330\252\330\271\330\257\331\212\331\204 ", nullptr));
        label_5->setText(QString());
        pushButton_12->setText(QString());
        pushButton_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
