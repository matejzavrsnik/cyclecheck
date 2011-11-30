/* 
 * File:   frmHelp.h
 * Author: matej
 *
 * Created on July 24, 2011, 8:33 PM
 */

#ifndef _FRMHELP_H
#define	_FRMHELP_H

#include "ui_frmHelp.h"

class frmHelp : public QDialog
{
    Q_OBJECT

public:

    frmHelp();
    virtual ~frmHelp();
    
    void loadHelpFile( QString helpFile );

private:

    Ui::frmHelp widget;

};

#endif	/* _FRMHELP_H */
