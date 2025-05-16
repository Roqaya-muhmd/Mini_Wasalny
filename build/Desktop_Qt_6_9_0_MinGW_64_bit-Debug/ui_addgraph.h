/********************************************************************************
** Form generated from reading UI file 'addgraph.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGRAPH_H
#define UI_ADDGRAPH_H

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

class Ui_addgraph
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QWidget *addgraph)
    {
        if (addgraph->objectName().isEmpty())
            addgraph->setObjectName("addgraph");
        addgraph->resize(468, 344);
        addgraph->setStyleSheet(QString::fromUtf8("QQLabel {\n"
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
        gridLayout = new QGridLayout(addgraph);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(addgraph);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 50));
        label_4->setMaximumSize(QSize(100, 50));
        QFont font;
        font.setPointSize(15);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_4, 0, Qt::AlignmentFlag::AlignHCenter);

        lineEdit_4 = new QLineEdit(addgraph);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(200, 30));
        lineEdit_4->setMaximumSize(QSize(200, 30));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_4, 0, Qt::AlignmentFlag::AlignHCenter);

        label = new QLabel(addgraph);
        label->setObjectName("label");
        label->setMinimumSize(QSize(150, 50));
        label->setMaximumSize(QSize(150, 50));
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        lineEdit = new QLineEdit(addgraph);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(200, 30));
        lineEdit->setMaximumSize(QSize(200, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        label_2 = new QLabel(addgraph);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(150, 50));
        label_2->setMaximumSize(QSize(150, 50));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2, 0, Qt::AlignmentFlag::AlignHCenter);

        lineEdit_2 = new QLineEdit(addgraph);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(200, 30));
        lineEdit_2->setMaximumSize(QSize(200, 30));

        verticalLayout->addWidget(lineEdit_2, 0, Qt::AlignmentFlag::AlignHCenter);

        label_3 = new QLabel(addgraph);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(150, 50));
        label_3->setMaximumSize(QSize(150, 50));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3, 0, Qt::AlignmentFlag::AlignHCenter);

        lineEdit_3 = new QLineEdit(addgraph);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(200, 30));
        lineEdit_3->setMaximumSize(QSize(200, 30));

        verticalLayout->addWidget(lineEdit_3, 0, Qt::AlignmentFlag::AlignHCenter);

        pushButton = new QPushButton(addgraph);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 50));
        pushButton->setMaximumSize(QSize(100, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(15);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton->setIcon(icon);

        verticalLayout->addWidget(pushButton, 0, Qt::AlignmentFlag::AlignHCenter);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(addgraph);

        QMetaObject::connectSlotsByName(addgraph);
    } // setupUi

    void retranslateUi(QWidget *addgraph)
    {
        addgraph->setWindowTitle(QCoreApplication::translate("addgraph", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("addgraph", "\330\247\330\263\331\205 \330\247\331\204\330\256\330\261\331\212\330\267\331\207", nullptr));
        label->setText(QCoreApplication::translate("addgraph", "\331\205\331\206 \331\201\331\212\331\206\330\237!", nullptr));
        label_2->setText(QCoreApplication::translate("addgraph", "\331\204\331\201\331\212\331\206\330\237!", nullptr));
        label_3->setText(QCoreApplication::translate("addgraph", "\331\207\330\252\330\257\331\201\330\271 \331\203\330\247\331\205 \330\237!", nullptr));
        pushButton->setText(QCoreApplication::translate("addgraph", "\330\247\330\266\330\247\331\201\331\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addgraph: public Ui_addgraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGRAPH_H
