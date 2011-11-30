/********************************************************************************
** Form generated from reading UI file 'frmMain.ui'
**
** Created: Wed Nov 30 23:29:45 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupParameters;
    QFormLayout *formLayout;
    QLabel *labelCycleElement;
    QLineEdit *editCycleElement;
    QLabel *labelListSize;
    QLineEdit *editListSize;
    QPushButton *btnGenerateList;
    QGroupBox *groupCalculations;
    QGridLayout *gridLayout;
    QPushButton *btnStartAll;
    QPushButton *btnStartNaive;
    QPushButton *btnStartFloyd;
    QPushButton *btnStartBrent;
    QLineEdit *editCycleFloydTime;
    QLineEdit *editCycleBrentTime;
    QLineEdit *editElementBrent;
    QLineEdit *editElementFloyd;
    QLineEdit *editElementNaive;
    QLineEdit *editElementNaiveTime;
    QLineEdit *editElementFloydTime;
    QLineEdit *editElementBrentTime;
    QLineEdit *editCycleNaiveTime;
    QLineEdit *editCycleNaiveResult;
    QLineEdit *editCycleFloydResult;
    QLineEdit *editCycleBrentResult;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QString::fromUtf8("frmMain"));
        frmMain->resize(510, 360);
        frmMain->setSizeGripEnabled(true);
        gridLayout_2 = new QGridLayout(frmMain);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(9, 9, 9, 9);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupParameters = new QGroupBox(frmMain);
        groupParameters->setObjectName(QString::fromUtf8("groupParameters"));
        formLayout = new QFormLayout(groupParameters);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(9, 9, 9, 9);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelCycleElement = new QLabel(groupParameters);
        labelCycleElement->setObjectName(QString::fromUtf8("labelCycleElement"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelCycleElement);

        editCycleElement = new QLineEdit(groupParameters);
        editCycleElement->setObjectName(QString::fromUtf8("editCycleElement"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editCycleElement);

        labelListSize = new QLabel(groupParameters);
        labelListSize->setObjectName(QString::fromUtf8("labelListSize"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelListSize);

        editListSize = new QLineEdit(groupParameters);
        editListSize->setObjectName(QString::fromUtf8("editListSize"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editListSize);

        btnGenerateList = new QPushButton(groupParameters);
        btnGenerateList->setObjectName(QString::fromUtf8("btnGenerateList"));

        formLayout->setWidget(4, QFormLayout::FieldRole, btnGenerateList);


        gridLayout_2->addWidget(groupParameters, 0, 0, 1, 1);

        groupCalculations = new QGroupBox(frmMain);
        groupCalculations->setObjectName(QString::fromUtf8("groupCalculations"));
        gridLayout = new QGridLayout(groupCalculations);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnStartAll = new QPushButton(groupCalculations);
        btnStartAll->setObjectName(QString::fromUtf8("btnStartAll"));
        btnStartAll->setEnabled(false);

        gridLayout->addWidget(btnStartAll, 0, 0, 1, 1);

        btnStartNaive = new QPushButton(groupCalculations);
        btnStartNaive->setObjectName(QString::fromUtf8("btnStartNaive"));
        btnStartNaive->setEnabled(false);

        gridLayout->addWidget(btnStartNaive, 1, 0, 1, 1);

        btnStartFloyd = new QPushButton(groupCalculations);
        btnStartFloyd->setObjectName(QString::fromUtf8("btnStartFloyd"));
        btnStartFloyd->setEnabled(false);

        gridLayout->addWidget(btnStartFloyd, 3, 0, 1, 1);

        btnStartBrent = new QPushButton(groupCalculations);
        btnStartBrent->setObjectName(QString::fromUtf8("btnStartBrent"));
        btnStartBrent->setEnabled(false);

        gridLayout->addWidget(btnStartBrent, 4, 0, 1, 1);

        editCycleFloydTime = new QLineEdit(groupCalculations);
        editCycleFloydTime->setObjectName(QString::fromUtf8("editCycleFloydTime"));
        editCycleFloydTime->setFrame(false);
        editCycleFloydTime->setReadOnly(true);

        gridLayout->addWidget(editCycleFloydTime, 3, 2, 1, 1);

        editCycleBrentTime = new QLineEdit(groupCalculations);
        editCycleBrentTime->setObjectName(QString::fromUtf8("editCycleBrentTime"));
        editCycleBrentTime->setFrame(false);
        editCycleBrentTime->setReadOnly(true);

        gridLayout->addWidget(editCycleBrentTime, 4, 2, 1, 1);

        editElementBrent = new QLineEdit(groupCalculations);
        editElementBrent->setObjectName(QString::fromUtf8("editElementBrent"));
        editElementBrent->setFrame(false);
        editElementBrent->setReadOnly(true);

        gridLayout->addWidget(editElementBrent, 4, 3, 1, 1);

        editElementFloyd = new QLineEdit(groupCalculations);
        editElementFloyd->setObjectName(QString::fromUtf8("editElementFloyd"));
        editElementFloyd->setFrame(false);
        editElementFloyd->setReadOnly(true);

        gridLayout->addWidget(editElementFloyd, 3, 3, 1, 1);

        editElementNaive = new QLineEdit(groupCalculations);
        editElementNaive->setObjectName(QString::fromUtf8("editElementNaive"));
        editElementNaive->setFrame(false);
        editElementNaive->setReadOnly(true);

        gridLayout->addWidget(editElementNaive, 1, 3, 1, 1);

        editElementNaiveTime = new QLineEdit(groupCalculations);
        editElementNaiveTime->setObjectName(QString::fromUtf8("editElementNaiveTime"));
        editElementNaiveTime->setFrame(false);
        editElementNaiveTime->setReadOnly(true);

        gridLayout->addWidget(editElementNaiveTime, 1, 4, 1, 1);

        editElementFloydTime = new QLineEdit(groupCalculations);
        editElementFloydTime->setObjectName(QString::fromUtf8("editElementFloydTime"));
        editElementFloydTime->setFrame(false);
        editElementFloydTime->setReadOnly(true);

        gridLayout->addWidget(editElementFloydTime, 3, 4, 1, 1);

        editElementBrentTime = new QLineEdit(groupCalculations);
        editElementBrentTime->setObjectName(QString::fromUtf8("editElementBrentTime"));
        editElementBrentTime->setFrame(false);
        editElementBrentTime->setReadOnly(true);

        gridLayout->addWidget(editElementBrentTime, 4, 4, 1, 1);

        editCycleNaiveTime = new QLineEdit(groupCalculations);
        editCycleNaiveTime->setObjectName(QString::fromUtf8("editCycleNaiveTime"));
        editCycleNaiveTime->setFrame(false);
        editCycleNaiveTime->setReadOnly(true);

        gridLayout->addWidget(editCycleNaiveTime, 1, 2, 1, 1);

        editCycleNaiveResult = new QLineEdit(groupCalculations);
        editCycleNaiveResult->setObjectName(QString::fromUtf8("editCycleNaiveResult"));
        editCycleNaiveResult->setFrame(false);
        editCycleNaiveResult->setReadOnly(true);

        gridLayout->addWidget(editCycleNaiveResult, 1, 1, 1, 1);

        editCycleFloydResult = new QLineEdit(groupCalculations);
        editCycleFloydResult->setObjectName(QString::fromUtf8("editCycleFloydResult"));
        editCycleFloydResult->setFrame(false);
        editCycleFloydResult->setReadOnly(true);

        gridLayout->addWidget(editCycleFloydResult, 3, 1, 1, 1);

        editCycleBrentResult = new QLineEdit(groupCalculations);
        editCycleBrentResult->setObjectName(QString::fromUtf8("editCycleBrentResult"));
        editCycleBrentResult->setFrame(false);
        editCycleBrentResult->setReadOnly(true);

        gridLayout->addWidget(editCycleBrentResult, 4, 1, 1, 1);


        gridLayout_2->addWidget(groupCalculations, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(frmMain);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        QWidget::setTabOrder(editListSize, editCycleElement);
        QWidget::setTabOrder(editCycleElement, btnGenerateList);
        QWidget::setTabOrder(btnGenerateList, btnStartAll);
        QWidget::setTabOrder(btnStartAll, btnStartNaive);
        QWidget::setTabOrder(btnStartNaive, btnStartFloyd);
        QWidget::setTabOrder(btnStartFloyd, btnStartBrent);
        QWidget::setTabOrder(btnStartBrent, buttonBox);
        QWidget::setTabOrder(buttonBox, editCycleNaiveTime);
        QWidget::setTabOrder(editCycleNaiveTime, editCycleFloydTime);
        QWidget::setTabOrder(editCycleFloydTime, editCycleBrentTime);

        retranslateUi(frmMain);
        QObject::connect(buttonBox, SIGNAL(accepted()), frmMain, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), frmMain, SLOT(reject()));

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QDialog *frmMain)
    {
        frmMain->setWindowTitle(QApplication::translate("frmMain", "Cycle Finding Algorithms Comparison", 0, QApplication::UnicodeUTF8));
        groupParameters->setTitle(QApplication::translate("frmMain", "Parameters", 0, QApplication::UnicodeUTF8));
        labelCycleElement->setText(QApplication::translate("frmMain", "Cycle start element", 0, QApplication::UnicodeUTF8));
        editCycleElement->setInputMask(QString());
        labelListSize->setText(QApplication::translate("frmMain", "Number of elements", 0, QApplication::UnicodeUTF8));
        editListSize->setInputMask(QString());
        btnGenerateList->setText(QApplication::translate("frmMain", "Generate Linked List", 0, QApplication::UnicodeUTF8));
        groupCalculations->setTitle(QApplication::translate("frmMain", "Calculations", 0, QApplication::UnicodeUTF8));
        btnStartAll->setText(QApplication::translate("frmMain", "Start All", 0, QApplication::UnicodeUTF8));
        btnStartNaive->setText(QApplication::translate("frmMain", "Start Naive", 0, QApplication::UnicodeUTF8));
        btnStartFloyd->setText(QApplication::translate("frmMain", "Start Floyd", 0, QApplication::UnicodeUTF8));
        btnStartBrent->setText(QApplication::translate("frmMain", "Start Brent", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
