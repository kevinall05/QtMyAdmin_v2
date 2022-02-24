/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
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
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *labelBienvenue;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_13;
    QLabel *labelConnexion;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *labelHostname;
    QLineEdit *lineEditHostname;
    QLabel *labelUsername;
    QLineEdit *lineEditUsername;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QLabel *labelDatabase;
    QLineEdit *lineEditDatabase;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Connexion)
    {
        if (Connexion->objectName().isEmpty())
            Connexion->setObjectName(QStringLiteral("Connexion"));
        Connexion->resize(570, 424);
        verticalLayout = new QVBoxLayout(Connexion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        labelBienvenue = new QLabel(Connexion);
        labelBienvenue->setObjectName(QStringLiteral("labelBienvenue"));

        horizontalLayout_6->addWidget(labelBienvenue);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        labelConnexion = new QLabel(Connexion);
        labelConnexion->setObjectName(QStringLiteral("labelConnexion"));

        horizontalLayout_7->addWidget(labelConnexion);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelHostname = new QLabel(Connexion);
        labelHostname->setObjectName(QStringLiteral("labelHostname"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelHostname);

        lineEditHostname = new QLineEdit(Connexion);
        lineEditHostname->setObjectName(QStringLiteral("lineEditHostname"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditHostname);

        labelUsername = new QLabel(Connexion);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelUsername);

        lineEditUsername = new QLineEdit(Connexion);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditUsername);

        labelPassword = new QLabel(Connexion);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelPassword);

        lineEditPassword = new QLineEdit(Connexion);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditPassword);

        labelDatabase = new QLabel(Connexion);
        labelDatabase->setObjectName(QStringLiteral("labelDatabase"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelDatabase);

        lineEditDatabase = new QLineEdit(Connexion);
        lineEditDatabase->setObjectName(QStringLiteral("lineEditDatabase"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditDatabase);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        pushButton = new QPushButton(Connexion);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Connexion);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(Connexion);

        pushButton_2->setDefault(true);


        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QDialog *Connexion)
    {
        Connexion->setWindowTitle(QApplication::translate("Connexion", "Dialog", nullptr));
        labelBienvenue->setText(QApplication::translate("Connexion", "Welcome to QtMyAdmin", nullptr));
        labelConnexion->setText(QApplication::translate("Connexion", "Connection page", nullptr));
        labelHostname->setText(QApplication::translate("Connexion", "Host :", nullptr));
        labelUsername->setText(QApplication::translate("Connexion", "Username :", nullptr));
        labelPassword->setText(QApplication::translate("Connexion", "Password :", nullptr));
        labelDatabase->setText(QApplication::translate("Connexion", "Database :", nullptr));
        pushButton->setText(QApplication::translate("Connexion", "Cancel", nullptr));
        pushButton_2->setText(QApplication::translate("Connexion", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
