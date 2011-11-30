/********************************************************************************
** Form generated from reading UI file 'frmHelp.ui'
**
** Created: Wed Nov 30 23:29:45 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMHELP_H
#define UI_FRMHELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_frmHelp
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textHelp;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *frmHelp)
    {
        if (frmHelp->objectName().isEmpty())
            frmHelp->setObjectName(QString::fromUtf8("frmHelp"));
        frmHelp->resize(400, 300);
        gridLayout = new QGridLayout(frmHelp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textHelp = new QTextEdit(frmHelp);
        textHelp->setObjectName(QString::fromUtf8("textHelp"));
        textHelp->setAcceptDrops(false);
        textHelp->setFrameShape(QFrame::Panel);
        textHelp->setFrameShadow(QFrame::Sunken);
        textHelp->setReadOnly(true);

        gridLayout->addWidget(textHelp, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(frmHelp);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(frmHelp);
        QObject::connect(buttonBox, SIGNAL(accepted()), frmHelp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), frmHelp, SLOT(reject()));

        QMetaObject::connectSlotsByName(frmHelp);
    } // setupUi

    void retranslateUi(QDialog *frmHelp)
    {
        frmHelp->setWindowTitle(QApplication::translate("frmHelp", "frmHelp", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmHelp: public Ui_frmHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMHELP_H
