/* 
 * File:   frmMain.h
 * Author: matej
 *
 * Created on July 17, 2011, 10:07 PM
 */

#ifndef _FRMMAIN_H
#define	_FRMMAIN_H

#include "ui_frmMain.h"
#include "algorithms/stopwatch.h"
#include "algorithms/linked_list.h"
#include <QLineEdit>

class frmMain : public QDialog
{
    Q_OBJECT

public:

    frmMain();
    virtual ~frmMain();

private:

    Ui::frmMain widget;
    //linked_list_cycle m_cycle;
    stopwatch m_stopwatch;
    linked_list::element* m_list;

    void calculate( QLineEdit* editResult, // widget to display result
                    QLineEdit* editResultTime, // widget to display time
                    QLineEdit* editElement, // widget to display element
                    QLineEdit* editElementTime, // widget to display time
                    linked_list::element* (*func_is_cycle)(linked_list::element*), // function for calculating cycle
                    linked_list::element* (*func_find_cycle)(linked_list::element*) ); // function for calculating cycle element
    
    void enableAlgoButtons( bool enable );
    void emptyAlgoResults();

private slots:

    void on_buttonBox_helpRequested();
    void on_btnGenerateList_clicked();
    void on_btnStartAll_clicked();
    void on_btnStartNaive_clicked();
    void on_btnStartFloyd_clicked();
    void on_btnStartBrent_clicked();

};

#endif	/* _FRMMAIN_H */
