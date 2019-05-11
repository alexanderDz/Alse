/********************************************************************************
** Form generated from reading UI file 'leds.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDS_H
#define UI_LEDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Leds
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_Usr_name;
    QLineEdit *_txtUsr_name;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_passwd;
    QLineEdit *_txtPswd;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *_cmdSign_in;
    QPushButton *_cmdLog_in;
    QLabel *label_info;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Leds)
    {
        if (Leds->objectName().isEmpty())
            Leds->setObjectName(QStringLiteral("Leds"));
        Leds->resize(368, 355);
        Leds->setMinimumSize(QSize(368, 355));
        Leds->setMaximumSize(QSize(368, 355));
        centralWidget = new QWidget(Leds);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 30, 261, 221));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 221, 50));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_Usr_name = new QLabel(layoutWidget);
        label_Usr_name->setObjectName(QStringLiteral("label_Usr_name"));
        label_Usr_name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_Usr_name);

        _txtUsr_name = new QLineEdit(layoutWidget);
        _txtUsr_name->setObjectName(QStringLiteral("_txtUsr_name"));

        verticalLayout->addWidget(_txtUsr_name);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 90, 221, 50));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_passwd = new QLabel(layoutWidget1);
        label_passwd->setObjectName(QStringLiteral("label_passwd"));
        label_passwd->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_passwd);

        _txtPswd = new QLineEdit(layoutWidget1);
        _txtPswd->setObjectName(QStringLiteral("_txtPswd"));
        _txtPswd->setAutoFillBackground(false);
        _txtPswd->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        _txtPswd->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(_txtPswd);

        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 180, 201, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        _cmdSign_in = new QPushButton(widget);
        _cmdSign_in->setObjectName(QStringLiteral("_cmdSign_in"));

        horizontalLayout->addWidget(_cmdSign_in);

        _cmdLog_in = new QPushButton(widget);
        _cmdLog_in->setObjectName(QStringLiteral("_cmdLog_in"));

        horizontalLayout->addWidget(_cmdLog_in);

        label_info = new QLabel(centralWidget);
        label_info->setObjectName(QStringLiteral("label_info"));
        label_info->setGeometry(QRect(30, 260, 311, 16));
        label_info->setAlignment(Qt::AlignCenter);
        Leds->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Leds);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 368, 22));
        Leds->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Leds);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Leds->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Leds);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Leds->setStatusBar(statusBar);

        retranslateUi(Leds);

        QMetaObject::connectSlotsByName(Leds);
    } // setupUi

    void retranslateUi(QMainWindow *Leds)
    {
        Leds->setWindowTitle(QApplication::translate("Leds", "Leds", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_Usr_name->setText(QApplication::translate("Leds", "Username", Q_NULLPTR));
        label_passwd->setText(QApplication::translate("Leds", "Password", Q_NULLPTR));
        _cmdSign_in->setText(QApplication::translate("Leds", "Sign In", Q_NULLPTR));
        _cmdLog_in->setText(QApplication::translate("Leds", "Log In", Q_NULLPTR));
        label_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Leds: public Ui_Leds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDS_H
