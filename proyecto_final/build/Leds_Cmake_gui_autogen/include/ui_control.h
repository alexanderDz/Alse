/********************************************************************************
** Form generated from reading UI file 'control.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_H
#define UI_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Control
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *_cmdSt_1;
    QPushButton *_cmdSt_2;
    QPushButton *_cmdSt_3;
    QPushButton *_cmdLog_out;
    QLabel *ctr_infoLabel;

    void setupUi(QDialog *Control)
    {
        if (Control->objectName().isEmpty())
            Control->setObjectName(QStringLiteral("Control"));
        Control->resize(373, 300);
        Control->setMinimumSize(QSize(373, 300));
        Control->setMaximumSize(QSize(373, 300));
        layoutWidget = new QWidget(Control);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 100, 291, 82));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        _cmdSt_1 = new QPushButton(layoutWidget);
        _cmdSt_1->setObjectName(QStringLiteral("_cmdSt_1"));
        _cmdSt_1->setMinimumSize(QSize(90, 80));
        _cmdSt_1->setMaximumSize(QSize(90, 80));

        horizontalLayout->addWidget(_cmdSt_1);

        _cmdSt_2 = new QPushButton(layoutWidget);
        _cmdSt_2->setObjectName(QStringLiteral("_cmdSt_2"));
        _cmdSt_2->setMinimumSize(QSize(90, 80));
        _cmdSt_2->setMaximumSize(QSize(90, 80));

        horizontalLayout->addWidget(_cmdSt_2);

        _cmdSt_3 = new QPushButton(layoutWidget);
        _cmdSt_3->setObjectName(QStringLiteral("_cmdSt_3"));
        _cmdSt_3->setMinimumSize(QSize(90, 80));
        _cmdSt_3->setMaximumSize(QSize(90, 80));

        horizontalLayout->addWidget(_cmdSt_3);

        _cmdLog_out = new QPushButton(Control);
        _cmdLog_out->setObjectName(QStringLiteral("_cmdLog_out"));
        _cmdLog_out->setGeometry(QRect(250, 260, 89, 25));
        ctr_infoLabel = new QLabel(Control);
        ctr_infoLabel->setObjectName(QStringLiteral("ctr_infoLabel"));
        ctr_infoLabel->setGeometry(QRect(10, 10, 171, 17));

        retranslateUi(Control);

        QMetaObject::connectSlotsByName(Control);
    } // setupUi

    void retranslateUi(QDialog *Control)
    {
        Control->setWindowTitle(QApplication::translate("Control", "Control", Q_NULLPTR));
        _cmdSt_1->setText(QApplication::translate("Control", "1", Q_NULLPTR));
        _cmdSt_2->setText(QApplication::translate("Control", "2", Q_NULLPTR));
        _cmdSt_3->setText(QApplication::translate("Control", "3", Q_NULLPTR));
        _cmdLog_out->setText(QApplication::translate("Control", "Log Out", Q_NULLPTR));
        ctr_infoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Control: public Ui_Control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_H
