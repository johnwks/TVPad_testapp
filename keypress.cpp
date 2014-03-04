#include "keypress.h"
 
#include <QApplication>
#include <QKeyEvent>
 
KeyPress::KeyPress (QWidget *parent) :
    QWidget (parent)
{
    myLabel = new QLabel ("<center>Runs script.sh in $CWD<br>Ensure script exist and has to exit (i.e. doesn't run indefinately).<br><br>Press EXIT to close this window.</center>");
    mainLayout = new QVBoxLayout;
    mainLayout->addWidget (myLabel);
    setLayout (mainLayout);
    setWindowTitle ("wolfdude's first TVPad2 app");
}
 
void KeyPress::keyPressEvent (QKeyEvent *event)
{
    if(event->key () == Qt::Key_Escape)
    {
        QApplication::quit ();
    }
}
