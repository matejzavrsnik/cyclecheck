/*
 * File:   frmMain.cpp
 * Author: matej
 *
 * Created on July 17, 2011, 10:07 PM
 */

#include "frmMain.h"
#include "frmHelp.h"
#include "algorithms/linked_list_cycle.h"

frmMain::frmMain()
{
    widget.setupUi(this);
    m_list = NULL;
}

frmMain::~frmMain()
{
    // clear list
    linked_list::cycle::delete_linked_list_with_cycle( m_list );
}

void frmMain::calculate( QLineEdit* editResult, // widget to display result
                         QLineEdit* editResultTime, // widget to display time
                         QLineEdit* editElement, // widget to display element
                         QLineEdit* editElementTime, // widget to display time
                         linked_list::element* (*func_is_cycle)(linked_list::element*), // function for calculating cycle
                         linked_list::element* (*func_find_cycle)(linked_list::element*) )
{
    // set default values
    editResult->setText( "" );
    editResultTime->setText( "" );
    editElement->setText( "" );
    editElementTime->setText( "" );
    // for time measures
    QString duration;
    // is there a cycle or not
    m_stopwatch.start();
    bool isCycle = ( NULL != (*func_is_cycle)( m_list ) );
    m_stopwatch.stop();
    // set checkbox whether it's a cycle or not
    if( isCycle )
        editResult->setText( "Found" );
    else
        editResult->setText( "Not found" );
    // display time needed to find cycle information
    duration = QString::number( m_stopwatch.duration() );
    editResultTime->setText( duration + "s" );
    if( isCycle )
    {
        // which element is the start of cycle
        m_stopwatch.start();
        linked_list::element* cycle = (*func_find_cycle)( m_list );
        m_stopwatch.stop();
        // display element index
        int cycleIndex = linked_list::find_element( cycle, m_list );
        editElement->setText( QString::number( cycleIndex ) );
        // display time it took to find element
        duration = QString::number( m_stopwatch.duration() );
        editElementTime->setText( duration + "s" );
    }
}

void frmMain::enableAlgoButtons( bool enable )
{
    widget.btnStartAll->setEnabled(enable);
    widget.btnStartNaive->setEnabled(enable);
    widget.btnStartFloyd->setEnabled(enable);
    widget.btnStartBrent->setEnabled(enable);
}

void frmMain::emptyAlgoResults()
{
    widget.editCycleNaiveResult->setText( "" );
    widget.editCycleNaiveTime->setText( "" );
    widget.editElementNaive->setText( "" );
    widget.editElementNaiveTime->setText( "" );
    widget.editCycleFloydResult->setText( "" );
    widget.editCycleFloydTime->setText( "" );
    widget.editElementFloyd->setText( "" );
    widget.editElementFloydTime->setText( "" );
    widget.editCycleBrentResult->setText( "" );
    widget.editCycleBrentTime->setText( "" );
    widget.editElementBrent->setText( "" );
    widget.editElementBrentTime->setText( "" );
}

void frmMain::on_buttonBox_helpRequested()
{
    // create and show help widget
    frmHelp helpForm;
    helpForm.loadHelpFile( "cycleHelp.html" );
    helpForm.exec();
}

void frmMain::on_btnGenerateList_clicked()
{
    int listSize = widget.editListSize->text().toInt();
    int cycleElement = widget.editCycleElement->text().toInt();

    enableAlgoButtons(false);
    if( listSize < 1 ) listSize = 1;
    // clear list
    linked_list::cycle::delete_linked_list_with_cycle( m_list );
    // actually create list
    m_list = linked_list::cycle::create_linked_list_with_cycle( listSize, cycleElement );
    enableAlgoButtons(true);
    emptyAlgoResults();
}

void frmMain::on_btnStartAll_clicked()
{
    enableAlgoButtons(false);
    emptyAlgoResults();
    on_btnStartNaive_clicked();
    on_btnStartFloyd_clicked();
    on_btnStartBrent_clicked();
    enableAlgoButtons(true);
}

void frmMain::on_btnStartNaive_clicked()
{
    calculate( widget.editCycleNaiveResult,
               widget.editCycleNaiveTime,
               widget.editElementNaive,
               widget.editElementNaiveTime,
               &linked_list::cycle::algorithm_naive_find_cycle,
               &linked_list::cycle::algorithm_naive_find_cycle );
}

void frmMain::on_btnStartFloyd_clicked()
{
    calculate( widget.editCycleFloydResult,
               widget.editCycleFloydTime,
               widget.editElementFloyd,
               widget.editElementFloydTime,
               &linked_list::cycle::algorithm_floyd_is_cycle,
               &linked_list::cycle::algorithm_floyd_find_cycle );
}

void frmMain::on_btnStartBrent_clicked()
{
    calculate( widget.editCycleBrentResult,
               widget.editCycleBrentTime,
               widget.editElementBrent,
               widget.editElementBrentTime,
               &linked_list::cycle::algorithm_brent_is_cycle,
               &linked_list::cycle::algorithm_brent_find_cycle );
}
