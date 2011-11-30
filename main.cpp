/*
 * File:   main.cpp
 * Author: matej
 *
 * Created on July 17, 2011, 10:04 PM
 */

#include <QtGui/QApplication>
#include <frmMain.h>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    frmMain mainForm;
    mainForm.show();

    return app.exec();
}
