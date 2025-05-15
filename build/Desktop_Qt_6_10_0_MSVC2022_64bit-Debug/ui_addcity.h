/********************************************************************************
** Form generated from reading UI file 'addcity.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCITY_H
#define UI_ADDCITY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCity
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *addCityNameLabel;
    QLineEdit *addCityNameLineEdit;
    QPushButton *addCityConfirmButton;
    QLabel *label;

    void setupUi(QWidget *AddCity)
    {
        if (AddCity->objectName().isEmpty())
            AddCity->setObjectName("AddCity");
        AddCity->resize(468, 344);
        AddCity->setStyleSheet(QString::fromUtf8("#widget  {\n"
"	background-image: url(:/background_images/map.jpg);\n"
"	\n"
"\n"
"	}"));
        gridLayout = new QGridLayout(AddCity);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName("verticalLayout");
        addCityNameLabel = new QLabel(AddCity);
        addCityNameLabel->setObjectName("addCityNameLabel");
        addCityNameLabel->setMinimumSize(QSize(200, 50));
        addCityNameLabel->setMaximumSize(QSize(200, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Imprint MT Shadow")});
        font.setPointSize(24);
        font.setItalic(false);
        addCityNameLabel->setFont(font);
        addCityNameLabel->setStyleSheet(QString::fromUtf8("QQLabel {\n"
"    qproperty-alignment: AlignCenter; /* \330\252\331\210\330\263\331\212\330\267 \330\247\331\204\331\206\330\265 (\330\250\330\257\331\210\331\206 CSS \330\271\330\247\330\257\331\212!) */\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                               stop:0 #3498db, stop:1 #2ecc71); /* \330\254\330\261\330\247\330\257\331\212\331\206\330\252 */\n"
"    border: 2px solid #2980b9;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"text-align: center;  \n"
"}\n"
"QLabel:hover {\n"
"    color: #ffffff;\n"
"    background-color: rgba( 86, 101, 115, 0.5); \n"
"border-radius: 10px;\n"
"}"));
        addCityNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(addCityNameLabel, 0, Qt::AlignmentFlag::AlignHCenter);

        addCityNameLineEdit = new QLineEdit(AddCity);
        addCityNameLineEdit->setObjectName("addCityNameLineEdit");
        addCityNameLineEdit->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addCityNameLineEdit->sizePolicy().hasHeightForWidth());
        addCityNameLineEdit->setSizePolicy(sizePolicy);
        addCityNameLineEdit->setMinimumSize(QSize(200, 30));
        addCityNameLineEdit->setMaximumSize(QSize(200, 30));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 127));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        QBrush brush4(QColor(0, 0, 0, 127));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        addCityNameLineEdit->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font1.setPointSize(12);
        addCityNameLineEdit->setFont(font1);
        addCityNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid #ccc;       /* Border color */\n"
"     \n"
"    padding: 5px;\n"
"    margin: 0;                    /* Remove default margin */\n"
"}\n"
"\n"
"/* Last QLineEdit should have a right border */\n"
"QLineEdit:last-child {\n"
"    border-right: 1px solid #ccc; \n"
"}"));

        verticalLayout->addWidget(addCityNameLineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        addCityConfirmButton = new QPushButton(AddCity);
        addCityConfirmButton->setObjectName("addCityConfirmButton");
        addCityConfirmButton->setEnabled(true);
        addCityConfirmButton->setMinimumSize(QSize(100, 40));
        addCityConfirmButton->setMaximumSize(QSize(100, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush5(QColor(193, 255, 193, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(48, 235, 138, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(40, 196, 115, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(16, 78, 46, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(21, 105, 61, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush10(QColor(143, 206, 173, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        QBrush brush11(QColor(32, 157, 92, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        QBrush brush12(QColor(16, 78, 46, 127));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        QBrush brush13(QColor(42, 204, 120, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush13);
        addCityConfirmButton->setPalette(palette1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(15);
        font2.setBold(true);
        addCityConfirmButton->setFont(font2);
        addCityConfirmButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        addCityConfirmButton->setAutoFillBackground(false);
        addCityConfirmButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color:  #C1FFC1;\n"
"		border:none;\n"
"		border-radius: 3px;\n"
"		text-align: left;\n"
"		padding: 8px 0 8px 15px;\n"
"		color: #788596;\n"
"    font-family: \"Segoe UI\", \"Arial\", \"Helvetica Neue\", sans-serif;\n"
"border-radius: 10px;\n"
"\n"
"	}\n"
"QPushButton:hover {\n"
"		background-color: rgba( 86, 101, 115, 0.5);\n"
"	}\n"
" QPushButton:checked {\n"
"		color: #fff;\n"
"	}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add-row-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addCityConfirmButton->setIcon(icon);
        addCityConfirmButton->setIconSize(QSize(11, 11));
        addCityConfirmButton->setCheckable(true);
        addCityConfirmButton->setAutoExclusive(true);

        verticalLayout->addWidget(addCityConfirmButton, 0, Qt::AlignmentFlag::AlignHCenter);

        label = new QLabel(AddCity);
        label->setObjectName("label");
        label->setMinimumSize(QSize(468, 50));
        label->setMaximumSize(QSize(468, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/background_images/mm.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(AddCity);

        QMetaObject::connectSlotsByName(AddCity);
    } // setupUi

    void retranslateUi(QWidget *AddCity)
    {
        AddCity->setWindowTitle(QCoreApplication::translate("AddCity", "Form", nullptr));
        addCityNameLabel->setText(QCoreApplication::translate("AddCity", "   \330\247\330\263\331\205 \330\247\331\204\331\205\330\257\331\212\331\206\330\251", nullptr));
        addCityConfirmButton->setText(QCoreApplication::translate("AddCity", "\330\245\330\266\330\247\331\201\330\251", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddCity: public Ui_AddCity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCITY_H
