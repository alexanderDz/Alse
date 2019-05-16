/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *_txtR_LsName;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *_txtR_national_id;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *_txtR_usrnm;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *_txtR_psswd;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *_txtR_name;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QDateEdit *_birthdate;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->setWindowModality(Qt::WindowModal);
        Register->resize(353, 422);
        Register->setMinimumSize(QSize(353, 422));
        Register->setMaximumSize(QSize(353, 422));
        buttonBox = new QDialogButtonBox(Register);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 380, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox_2 = new QGroupBox(Register);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 20, 271, 341));
        layoutWidget_4 = new QWidget(groupBox_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 80, 251, 50));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        _txtR_LsName = new QLineEdit(layoutWidget_4);
        _txtR_LsName->setObjectName(QStringLiteral("_txtR_LsName"));

        verticalLayout_2->addWidget(_txtR_LsName);

        layoutWidget_5 = new QWidget(groupBox_2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 130, 251, 50));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        _txtR_national_id = new QLineEdit(layoutWidget_5);
        _txtR_national_id->setObjectName(QStringLiteral("_txtR_national_id"));

        verticalLayout_3->addWidget(_txtR_national_id);

        layoutWidget_6 = new QWidget(groupBox_2);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 180, 251, 50));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        _txtR_usrnm = new QLineEdit(layoutWidget_6);
        _txtR_usrnm->setObjectName(QStringLiteral("_txtR_usrnm"));

        verticalLayout_4->addWidget(_txtR_usrnm);

        layoutWidget_7 = new QWidget(groupBox_2);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 230, 251, 51));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_7);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        _txtR_psswd = new QLineEdit(layoutWidget_7);
        _txtR_psswd->setObjectName(QStringLiteral("_txtR_psswd"));
        _txtR_psswd->setEchoMode(QLineEdit::Password);

        verticalLayout_5->addWidget(_txtR_psswd);

        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 251, 50));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        _txtR_name = new QLineEdit(layoutWidget);
        _txtR_name->setObjectName(QStringLiteral("_txtR_name"));

        verticalLayout->addWidget(_txtR_name);

        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 280, 251, 51));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        _birthdate = new QDateEdit(layoutWidget_2);
        _birthdate->setObjectName(QStringLiteral("_birthdate"));
        _birthdate->setCalendarPopup(true);

        verticalLayout_6->addWidget(_birthdate);


        retranslateUi(Register);
        QObject::connect(buttonBox, SIGNAL(accepted()), Register, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Register, SLOT(reject()));

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Register", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Register", "Register", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "Last Name", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "National Id", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "Username", Q_NULLPTR));
        label_5->setText(QApplication::translate("Register", "Password", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "First Name", Q_NULLPTR));
        label_6->setText(QApplication::translate("Register", "Birthdate", Q_NULLPTR));
        _birthdate->setDisplayFormat(QApplication::translate("Register", "d/MM/yyyy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
