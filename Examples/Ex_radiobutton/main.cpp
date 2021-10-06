#include <QApplication>
#include "radiobtn.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    radiobtn w;
    w.show();
    a.connect (&a, SIGNAL (lastWindowClosed()), &a, SLOT (quit()));
    return a.exec();
}
