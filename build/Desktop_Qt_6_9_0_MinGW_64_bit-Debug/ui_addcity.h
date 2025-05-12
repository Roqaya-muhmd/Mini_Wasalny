/********************************************************************************
** Form generated from reading UI file 'addcity.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCITY_H
#define UI_ADDCITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCity
{
public:
    QLabel *addCityNameLabel;
    QLineEdit *addCityNameLineEdit;
    QPushButton *addCityConfirmButton;

    void setupUi(QWidget *AddCity)
    {
        if (AddCity->objectName().isEmpty())
            AddCity->setObjectName("AddCity");
        AddCity->resize(1107, 574);
        addCityNameLabel = new QLabel(AddCity);
        addCityNameLabel->setObjectName("addCityNameLabel");
        addCityNameLabel->setGeometry(QRect(250, 80, 401, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font.setPointSize(24);
        font.setItalic(true);
        addCityNameLabel->setFont(font);
        addCityNameLineEdit = new QLineEdit(AddCity);
        addCityNameLineEdit->setObjectName("addCityNameLineEdit");
        addCityNameLineEdit->setGeometry(QRect(250, 230, 611, 51));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 127));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush1);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush1);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush1);
        QBrush brush4(QColor(0, 0, 0, 127));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush1);
#endif
        addCityNameLineEdit->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font1.setPointSize(12);
        addCityNameLineEdit->setFont(font1);
        addCityConfirmButton = new QPushButton(AddCity);
        addCityConfirmButton->setObjectName("addCityConfirmButton");
        addCityConfirmButton->setGeometry(QRect(410, 410, 241, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush5(QColor(32, 157, 92, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush5);
        QBrush brush6(QColor(48, 235, 138, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush6);
        QBrush brush7(QColor(40, 196, 115, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush7);
        QBrush brush8(QColor(16, 78, 46, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush8);
        QBrush brush9(QColor(21, 105, 61, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush9);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush5);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush1);
        QBrush brush10(QColor(143, 206, 173, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush10);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush5);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush7);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush8);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush9);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush5);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush10);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush8);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush5);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush7);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush8);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush9);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush8);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush8);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush5);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush5);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush5);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush1);
        QBrush brush11(QColor(16, 78, 46, 127));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush11);
#endif
        QBrush brush12(QColor(42, 204, 120, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush12);
#endif
        addCityConfirmButton->setPalette(palette1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font2.setPointSize(18);
        font2.setItalic(true);
        addCityConfirmButton->setFont(font2);

        retranslateUi(AddCity);

        QMetaObject::connectSlotsByName(AddCity);
    } // setupUi

    void retranslateUi(QWidget *AddCity)
    {
        AddCity->setWindowTitle(QCoreApplication::translate("AddCity", "Form", nullptr));
        addCityNameLabel->setText(QCoreApplication::translate("AddCity", "   \330\247\330\263\331\205 \330\247\331\204\331\205\330\257\331\212\331\206\330\251", nullptr));
        addCityConfirmButton->setText(QCoreApplication::translate("AddCity", "\330\245\330\266\330\247\331\201\330\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCity: public Ui_AddCity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCITY_H
