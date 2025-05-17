/********************************************************************************
** Form generated from reading UI file 'deletecity.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
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
    QLabel *cityNotFound_warning;
    QLineEdit *deleteCityNameLineEdit;
    QPushButton *deleteCityConfirmButton;
    QLabel *label;

    void setupUi(QWidget *DeleteCity)
    {
        if (DeleteCity->objectName().isEmpty())
            DeleteCity->setObjectName("DeleteCity");
        DeleteCity->resize(480, 344);
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

        cityNotFound_warning = new QLabel(DeleteCity);
        cityNotFound_warning->setObjectName("cityNotFound_warning");
        cityNotFound_warning->setMinimumSize(QSize(120, 25));
        cityNotFound_warning->setMaximumSize(QSize(120, 25));

        verticalLayout->addWidget(cityNotFound_warning, 0, Qt::AlignmentFlag::AlignHCenter);

        deleteCityNameLineEdit = new QLineEdit(DeleteCity);
        deleteCityNameLineEdit->setObjectName("deleteCityNameLineEdit");
        deleteCityNameLineEdit->setMinimumSize(QSize(200, 30));
        deleteCityNameLineEdit->setMaximumSize(QSize(200, 30));
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
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(193, 255, 193, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(48, 235, 138, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(40, 196, 115, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(16, 78, 46, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(21, 105, 61, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(143, 206, 173, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush9(QColor(0, 0, 0, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush10(QColor(32, 157, 92, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush11(QColor(16, 78, 46, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush12(QColor(42, 204, 120, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        deleteCityConfirmButton->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(15);
        font1.setItalic(true);
        deleteCityConfirmButton->setFont(font1);
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
        deleteCityConfirmButton->setCheckable(true);
        deleteCityConfirmButton->setChecked(true);
        deleteCityConfirmButton->setAutoExclusive(true);

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
        cityNotFound_warning->setText(QString());
        deleteCityConfirmButton->setText(QCoreApplication::translate("DeleteCity", "\330\255\330\260\331\201", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DeleteCity: public Ui_DeleteCity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECITY_H
