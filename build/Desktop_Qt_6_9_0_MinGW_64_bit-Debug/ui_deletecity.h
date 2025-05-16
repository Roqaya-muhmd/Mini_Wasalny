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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteCity
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *deleteCityNameLabel;
    QLineEdit *deleteCityNameLineEdit;
    QPushButton *deleteCityConfirmButton;
    QLabel *label;

    void setupUi(QWidget *DeleteCity)
    {
        if (DeleteCity->objectName().isEmpty())
            DeleteCity->setObjectName("DeleteCity");
        DeleteCity->resize(468, 344);
        gridLayout = new QGridLayout(DeleteCity);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        deleteCityNameLabel = new QLabel(DeleteCity);
        deleteCityNameLabel->setObjectName("deleteCityNameLabel");
        deleteCityNameLabel->setMinimumSize(QSize(180, 50));
        deleteCityNameLabel->setMaximumSize(QSize(170, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        deleteCityNameLabel->setFont(font);
        deleteCityNameLabel->setStyleSheet(QString::fromUtf8("QQLabel {\n"
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
        deleteCityNameLabel->setScaledContents(false);
        deleteCityNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(deleteCityNameLabel, 0, Qt::AlignmentFlag::AlignHCenter);

        deleteCityNameLineEdit = new QLineEdit(DeleteCity);
        deleteCityNameLineEdit->setObjectName("deleteCityNameLineEdit");
        deleteCityNameLineEdit->setMinimumSize(QSize(200, 30));
        deleteCityNameLineEdit->setMaximumSize(QSize(200, 30));
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
        deleteCityNameLineEdit->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font1.setPointSize(12);
        deleteCityNameLineEdit->setFont(font1);
        deleteCityNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(deleteCityNameLineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        deleteCityConfirmButton = new QPushButton(DeleteCity);
        deleteCityConfirmButton->setObjectName("deleteCityConfirmButton");
        deleteCityConfirmButton->setMinimumSize(QSize(100, 20));
        deleteCityConfirmButton->setMaximumSize(QSize(100, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush5(QColor(193, 255, 193, 255));
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
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush5);
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
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush5);
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
        QBrush brush11(QColor(32, 157, 92, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush11);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush1);
        QBrush brush12(QColor(16, 78, 46, 127));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush12);
#endif
        QBrush brush13(QColor(42, 204, 120, 255));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush13);
#endif
        deleteCityConfirmButton->setPalette(palette1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(15);
        font2.setItalic(true);
        deleteCityConfirmButton->setFont(font2);
        deleteCityConfirmButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon.addFile(QString::fromUtf8(":/icons/trash-9-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deleteCityConfirmButton->setIcon(icon);

        verticalLayout->addWidget(deleteCityConfirmButton, 0, Qt::AlignmentFlag::AlignHCenter);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        label = new QLabel(DeleteCity);
        label->setObjectName("label");
        label->setMinimumSize(QSize(468, 100));
        label->setMaximumSize(QSize(468, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/background_images/mm.png")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);


        retranslateUi(DeleteCity);

        QMetaObject::connectSlotsByName(DeleteCity);
    } // setupUi

    void retranslateUi(QWidget *DeleteCity)
    {
        DeleteCity->setWindowTitle(QCoreApplication::translate("DeleteCity", "Form", nullptr));
        deleteCityNameLabel->setText(QCoreApplication::translate("DeleteCity", "   \330\247\330\263\331\205 \330\247\331\204\331\205\330\257\331\212\331\206\330\251", nullptr));
        deleteCityConfirmButton->setText(QCoreApplication::translate("DeleteCity", "\330\255\330\260\331\201", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DeleteCity: public Ui_DeleteCity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECITY_H
