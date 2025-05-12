/********************************************************************************
** Form generated from reading UI file 'deletecity.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECITY_H
#define UI_DELETECITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteCity
{
public:
    QLabel *deleteCityNameLabel;
    QPushButton *deleteCityConfirmButton;
    QLineEdit *deleteCityNameLineEdit;

    void setupUi(QWidget *DeleteCity)
    {
        if (DeleteCity->objectName().isEmpty())
            DeleteCity->setObjectName("DeleteCity");
        DeleteCity->resize(1107, 574);
        deleteCityNameLabel = new QLabel(DeleteCity);
        deleteCityNameLabel->setObjectName("deleteCityNameLabel");
        deleteCityNameLabel->setGeometry(QRect(260, 70, 401, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font.setPointSize(24);
        font.setItalic(true);
        deleteCityNameLabel->setFont(font);
        deleteCityConfirmButton = new QPushButton(DeleteCity);
        deleteCityConfirmButton->setObjectName("deleteCityConfirmButton");
        deleteCityConfirmButton->setGeometry(QRect(420, 400, 241, 51));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(32, 157, 92, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(48, 235, 138, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(40, 196, 115, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(16, 78, 46, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(21, 105, 61, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        QBrush brush7(QColor(143, 206, 173, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush9(QColor(0, 0, 0, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush10(QColor(16, 78, 46, 127));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(42, 204, 120, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush11);
#endif
        deleteCityConfirmButton->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font1.setPointSize(18);
        font1.setItalic(true);
        deleteCityConfirmButton->setFont(font1);
        deleteCityNameLineEdit = new QLineEdit(DeleteCity);
        deleteCityNameLineEdit->setObjectName("deleteCityNameLineEdit");
        deleteCityNameLineEdit->setGeometry(QRect(260, 220, 611, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush12(QColor(255, 255, 255, 127));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush6);
#endif
        deleteCityNameLineEdit->setPalette(palette1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font2.setPointSize(12);
        deleteCityNameLineEdit->setFont(font2);

        retranslateUi(DeleteCity);

        QMetaObject::connectSlotsByName(DeleteCity);
    } // setupUi

    void retranslateUi(QWidget *DeleteCity)
    {
        DeleteCity->setWindowTitle(QCoreApplication::translate("DeleteCity", "Form", nullptr));
        deleteCityNameLabel->setText(QCoreApplication::translate("DeleteCity", "   \330\247\330\263\331\205 \330\247\331\204\331\205\330\257\331\212\331\206\330\251", nullptr));
        deleteCityConfirmButton->setText(QCoreApplication::translate("DeleteCity", "\330\255\330\260\331\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteCity: public Ui_DeleteCity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECITY_H
