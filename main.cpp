#include <QtGui>
#include "keypress.h"
 
int main (int argc, char *argv[])
{
    QProcess p;
    QApplication a (argc, argv);
 
    KeyPress *keyPress = new KeyPress ();
    keyPress->show ();
 
    p.start ("./script.sh");
    p.waitForFinished (-1);

    QString p_stdout = p.readAllStandardOutput ();
    QString p_stderr = p.readAllStandardError ();

    return a.exec ();
}
