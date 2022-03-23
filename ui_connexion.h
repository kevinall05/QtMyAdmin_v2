/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Connexion
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_13;
    QLabel *labelConnexion;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_3;
    QComboBox *comboBoxTypeDatabase;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelConnectionError;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelHostname;
    QLineEdit *lineEditHostname;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelDatabase;
    QLineEdit *lineEditDatabase;
    QPushButton *pushButtonBrowse;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelUsername;
    QLineEdit *lineEditUsername;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButtonCancel;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Connexion)
    {
        if (Connexion->objectName().isEmpty())
            Connexion->setObjectName(QString::fromUtf8("Connexion"));
        Connexion->resize(357, 433);
        QFont font;
        Connexion->setFont(font);
        Connexion->setStyleSheet(QString::fromUtf8("* {\n"
"font-family: Quicksand;\n"
"font-size: 15px; \n"
"}\n"
"\n"
"QPushButton {\n"
"border: 2px solid #6c78af; \n"
"border-radius: 15; \n"
"background: #fff;\n"
"padding: 5px 30px;\n"
"font-weight: 700;\n"
"color: #6c78af;\n"
"}\n"
"QPushButton:hover {\n"
"background:#292929;\n"
"color: white;\n"
"border: 2px solid #f89c0e; \n"
"}\n"
"\n"
"QLineEdit {\n"
"border: 2px solid #6c78af; \n"
"border-radius: 13; \n"
"max-width:350px; \n"
"padding: 3px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Connexion);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        labelTitle = new QLabel(Connexion);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setStyleSheet(QString::fromUtf8("font-size: 30px; "));

        horizontalLayout_6->addWidget(labelTitle);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Connexion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: #6c78af; font-size: 30px; font-weight: bold;"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(Connexion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: #f89c0e; font-size: 30px; font-weight: bold;"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        labelConnexion = new QLabel(Connexion);
        labelConnexion->setObjectName(QString::fromUtf8("labelConnexion"));
        labelConnexion->setStyleSheet(QString::fromUtf8("font-size: 20px;"));

        horizontalLayout_7->addWidget(labelConnexion);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        label_3 = new QLabel(Connexion);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_11->addWidget(label_3);

        comboBoxTypeDatabase = new QComboBox(Connexion);
        comboBoxTypeDatabase->setObjectName(QString::fromUtf8("comboBoxTypeDatabase"));

        horizontalLayout_11->addWidget(comboBoxTypeDatabase);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        labelConnectionError = new QLabel(Connexion);
        labelConnectionError->setObjectName(QString::fromUtf8("labelConnectionError"));
        labelConnectionError->setStyleSheet(QString::fromUtf8("color: red; "));

        horizontalLayout_9->addWidget(labelConnectionError);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelHostname = new QLabel(Connexion);
        labelHostname->setObjectName(QString::fromUtf8("labelHostname"));

        horizontalLayout_3->addWidget(labelHostname);

        lineEditHostname = new QLineEdit(Connexion);
        lineEditHostname->setObjectName(QString::fromUtf8("lineEditHostname"));
        lineEditHostname->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(lineEditHostname);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        labelDatabase = new QLabel(Connexion);
        labelDatabase->setObjectName(QString::fromUtf8("labelDatabase"));

        horizontalLayout_8->addWidget(labelDatabase);

        lineEditDatabase = new QLineEdit(Connexion);
        lineEditDatabase->setObjectName(QString::fromUtf8("lineEditDatabase"));
        lineEditDatabase->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(lineEditDatabase);

        pushButtonBrowse = new QPushButton(Connexion);
        pushButtonBrowse->setObjectName(QString::fromUtf8("pushButtonBrowse"));
        pushButtonBrowse->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(pushButtonBrowse);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer_5 = new QSpacerItem(10, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelUsername = new QLabel(Connexion);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));

        horizontalLayout_4->addWidget(labelUsername);

        lineEditUsername = new QLineEdit(Connexion);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));
        lineEditUsername->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(lineEditUsername);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelPassword = new QLabel(Connexion);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        horizontalLayout_5->addWidget(labelPassword);

        lineEditPassword = new QLineEdit(Connexion);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setStyleSheet(QString::fromUtf8(""));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_10->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        pushButtonCancel = new QPushButton(Connexion);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setStyleSheet(QString::fromUtf8(""));
        pushButtonCancel->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButtonCancel);

        pushButton = new QPushButton(Connexion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(Connexion);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QDialog *Connexion)
    {
        Connexion->setWindowTitle(QCoreApplication::translate("Connexion", "Connection - QtMyAdmin", nullptr));
        labelTitle->setText(QCoreApplication::translate("Connexion", "Welcome to", nullptr));
        label->setText(QCoreApplication::translate("Connexion", "Qt", nullptr));
        label_2->setText(QCoreApplication::translate("Connexion", "MyAdmin", nullptr));
        labelConnexion->setText(QCoreApplication::translate("Connexion", "Connection page", nullptr));
        label_3->setText(QCoreApplication::translate("Connexion", "Select the type of database :", nullptr));
        labelConnectionError->setText(QCoreApplication::translate("Connexion", "-- incorrect information --", nullptr));
        labelHostname->setText(QCoreApplication::translate("Connexion", "Host :", nullptr));
        lineEditHostname->setText(QCoreApplication::translate("Connexion", "172.28.100.3", nullptr));
        labelDatabase->setText(QCoreApplication::translate("Connexion", "Database :", nullptr));
        lineEditDatabase->setText(QCoreApplication::translate("Connexion", "kallemand_zoo", nullptr));
        pushButtonBrowse->setText(QCoreApplication::translate("Connexion", "Browse", nullptr));
        labelUsername->setText(QCoreApplication::translate("Connexion", "Username :", nullptr));
        lineEditUsername->setText(QCoreApplication::translate("Connexion", "esimon", nullptr));
        labelPassword->setText(QCoreApplication::translate("Connexion", "Password :", nullptr));
        lineEditPassword->setText(QCoreApplication::translate("Connexion", "elini01", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("Connexion", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("Connexion", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
