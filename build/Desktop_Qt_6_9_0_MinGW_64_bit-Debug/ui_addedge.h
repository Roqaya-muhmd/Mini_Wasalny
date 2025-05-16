/********************************************************************************
** Form generated from reading UI file 'addedge.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDGE_H
#define UI_ADDEDGE_H

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

class Ui_AddEdge
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *addEdgeFirstCityNameLabel;
    QLineEdit *addEdgeFirstCityNameLineEdit;
    QLabel *addEdgeSecondCityNameLabel;
    QLineEdit *addEdgeSecondCityNameLineEdit;
    QLabel *addEdgeWeightLabel;
    QLineEdit *addEdgeWeightLineEdit;
    QPushButton *addEdgeConfirmButton;
    QLabel *label;

    void setupUi(QWidget *AddEdge)
    {
        if (AddEdge->objectName().isEmpty())
            AddEdge->setObjectName("AddEdge");
        AddEdge->resize(468, 344);
        gridLayout = new QGridLayout(AddEdge);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addEdgeFirstCityNameLabel = new QLabel(AddEdge);
        addEdgeFirstCityNameLabel->setObjectName("addEdgeFirstCityNameLabel");
        addEdgeFirstCityNameLabel->setMinimumSize(QSize(160, 40));
        addEdgeFirstCityNameLabel->setMaximumSize(QSize(200, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(15);
        font.setItalic(false);
        addEdgeFirstCityNameLabel->setFont(font);
        addEdgeFirstCityNameLabel->setStyleSheet(QString::fromUtf8("QQLabel {\n"
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
        addEdgeFirstCityNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(addEdgeFirstCityNameLabel, 0, Qt::AlignmentFlag::AlignHCenter);

        addEdgeFirstCityNameLineEdit = new QLineEdit(AddEdge);
        addEdgeFirstCityNameLineEdit->setObjectName("addEdgeFirstCityNameLineEdit");
        addEdgeFirstCityNameLineEdit->setMinimumSize(QSize(200, 30));
        addEdgeFirstCityNameLineEdit->setMaximumSize(QSize(200, 30));
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
        addEdgeFirstCityNameLineEdit->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font1.setPointSize(12);
        addEdgeFirstCityNameLineEdit->setFont(font1);
        addEdgeFirstCityNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(addEdgeFirstCityNameLineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        addEdgeSecondCityNameLabel = new QLabel(AddEdge);
        addEdgeSecondCityNameLabel->setObjectName("addEdgeSecondCityNameLabel");
        addEdgeSecondCityNameLabel->setMinimumSize(QSize(160, 40));
        addEdgeSecondCityNameLabel->setMaximumSize(QSize(160, 40));
        addEdgeSecondCityNameLabel->setFont(font);
        addEdgeSecondCityNameLabel->setStyleSheet(QString::fromUtf8("QQLabel {\n"
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
        addEdgeSecondCityNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(addEdgeSecondCityNameLabel, 0, Qt::AlignmentFlag::AlignHCenter);

        addEdgeSecondCityNameLineEdit = new QLineEdit(AddEdge);
        addEdgeSecondCityNameLineEdit->setObjectName("addEdgeSecondCityNameLineEdit");
        addEdgeSecondCityNameLineEdit->setMinimumSize(QSize(200, 30));
        addEdgeSecondCityNameLineEdit->setMaximumSize(QSize(200, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush1);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush1);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush1);
#endif
        addEdgeSecondCityNameLineEdit->setPalette(palette1);
        addEdgeSecondCityNameLineEdit->setFont(font1);
        addEdgeSecondCityNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(addEdgeSecondCityNameLineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        addEdgeWeightLabel = new QLabel(AddEdge);
        addEdgeWeightLabel->setObjectName("addEdgeWeightLabel");
        addEdgeWeightLabel->setMinimumSize(QSize(150, 30));
        addEdgeWeightLabel->setMaximumSize(QSize(150, 30));
        addEdgeWeightLabel->setFont(font);
        addEdgeWeightLabel->setStyleSheet(QString::fromUtf8("QQLabel {\n"
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
        addEdgeWeightLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(addEdgeWeightLabel, 0, Qt::AlignmentFlag::AlignHCenter);

        addEdgeWeightLineEdit = new QLineEdit(AddEdge);
        addEdgeWeightLineEdit->setObjectName("addEdgeWeightLineEdit");
        addEdgeWeightLineEdit->setMinimumSize(QSize(200, 30));
        addEdgeWeightLineEdit->setMaximumSize(QSize(200, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush2);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush1);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush1);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush1);
#endif
        addEdgeWeightLineEdit->setPalette(palette2);
        addEdgeWeightLineEdit->setFont(font1);
        addEdgeWeightLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(addEdgeWeightLineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        addEdgeConfirmButton = new QPushButton(AddEdge);
        addEdgeConfirmButton->setObjectName("addEdgeConfirmButton");
        addEdgeConfirmButton->setMinimumSize(QSize(100, 20));
        addEdgeConfirmButton->setMaximumSize(QSize(100, 30));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush5(QColor(193, 255, 193, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush5);
        QBrush brush6(QColor(48, 235, 138, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush6);
        QBrush brush7(QColor(40, 196, 115, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush7);
        QBrush brush8(QColor(16, 78, 46, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush8);
        QBrush brush9(QColor(21, 105, 61, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush9);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush5);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush5);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush1);
        QBrush brush10(QColor(143, 206, 173, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush10);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush2);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush5);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush7);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush8);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush9);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush5);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush5);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush10);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush5);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush6);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush7);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush9);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush5);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush5);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush1);
        QBrush brush11(QColor(32, 157, 92, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush11);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush2);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush1);
        QBrush brush12(QColor(16, 78, 46, 127));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush12);
#endif
        QBrush brush13(QColor(42, 204, 120, 255));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush13);
#endif
        addEdgeConfirmButton->setPalette(palette3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(15);
        font2.setItalic(true);
        addEdgeConfirmButton->setFont(font2);
        addEdgeConfirmButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon.addFile(QString::fromUtf8(":/icons/add-16.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addEdgeConfirmButton->setIcon(icon);
        addEdgeConfirmButton->setCheckable(true);
        addEdgeConfirmButton->setAutoExclusive(true);

        verticalLayout->addWidget(addEdgeConfirmButton, 0, Qt::AlignmentFlag::AlignHCenter);

        label = new QLabel(AddEdge);
        label->setObjectName("label");
        label->setMinimumSize(QSize(468, 50));
        label->setMaximumSize(QSize(468, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/background_images/mm.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(AddEdge);

        QMetaObject::connectSlotsByName(AddEdge);
    } // setupUi

    void retranslateUi(QWidget *AddEdge)
    {
        AddEdge->setWindowTitle(QCoreApplication::translate("AddEdge", "Form", nullptr));
        addEdgeFirstCityNameLabel->setText(QCoreApplication::translate("AddEdge", "   \330\247\330\263\331\205 \330\247\331\204\331\205\330\257\331\212\331\206\330\251 \330\247\331\204\330\247\331\210\331\204\331\211", nullptr));
        addEdgeSecondCityNameLabel->setText(QCoreApplication::translate("AddEdge", "   \330\247\330\263\331\205 \330\247\331\204\331\205\330\257\331\212\331\206\330\251 \330\247\331\204\330\253\330\247\331\206\331\212\330\251", nullptr));
        addEdgeWeightLabel->setText(QCoreApplication::translate("AddEdge", "   \330\252\331\203\331\204\331\201\330\251 \330\247\331\204\330\267\330\261\331\212\331\202", nullptr));
        addEdgeConfirmButton->setText(QCoreApplication::translate("AddEdge", "\330\245\330\266\330\247\331\201\330\251", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddEdge: public Ui_AddEdge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDGE_H
