/********************************************************************************
** Form generated from reading UI file 'zwmpcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZWMPCONTROLDIALOG_H
#define UI_ZWMPCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZWMPControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZWMP;
    QLabel *labelZWMP_int;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout3;
    QPushButton *pushButtonAll;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout1;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZWMPControlDialog)
    {
        if (ZWMPControlDialog->objectName().isEmpty())
            ZWMPControlDialog->setObjectName(QStringLiteral("ZWMPControlDialog"));
        ZWMPControlDialog->resize(681, 450);
        ZWMPControlDialog->setMinimumSize(QSize(681, 450));
        verticalLayout = new QVBoxLayout(ZWMPControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 10);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(6, -1, 6, -1);
        labelQuantity = new QLabel(ZWMPControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZWMPControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZWMP = new QLabel(ZWMPControlDialog);
        labelZWMP->setObjectName(QStringLiteral("labelZWMP"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZWMP);

        labelZWMP_int = new QLabel(ZWMPControlDialog);
        labelZWMP_int->setObjectName(QStringLiteral("labelZWMP_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZWMP_int);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(14);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        horizontalLayout3->setContentsMargins(-1, -1, -1, 10);
        pushButtonAll = new QPushButton(ZWMPControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        horizontalLayout3->addWidget(pushButtonAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout3);

        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName(QStringLiteral("verticalLayout1"));
        treeWidget = new QTreeWidget(ZWMPControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(4, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(3, QStringLiteral("zWMP Version"));
        __qtreewidgetitem->setText(2, QStringLiteral("zWMP ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout1->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZWMPControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout1->addWidget(buttonBox);


        verticalLayout->addLayout(verticalLayout1);


        retranslateUi(ZWMPControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZWMPControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZWMPControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZWMPControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZWMPControlDialog)
    {
        ZWMPControlDialog->setWindowTitle(QApplication::translate("ZWMPControlDialog", "Select zWMP to Spend", 0));
        labelQuantity->setText(QApplication::translate("ZWMPControlDialog", "Quantity", 0));
        labelQuantity_int->setText(QApplication::translate("ZWMPControlDialog", "0", 0));
        labelZWMP->setText(QApplication::translate("ZWMPControlDialog", "zWMP", 0));
        labelZWMP_int->setText(QApplication::translate("ZWMPControlDialog", "0", 0));
        pushButtonAll->setText(QApplication::translate("ZWMPControlDialog", "Select/Deselect All", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("ZWMPControlDialog", "Is Spendable", 0));
    } // retranslateUi

};

namespace Ui {
    class ZWMPControlDialog: public Ui_ZWMPControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZWMPCONTROLDIALOG_H
