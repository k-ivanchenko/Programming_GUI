#include "widget.h"
#include <QTextEdit>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    QTextEdit txt;
    txt.setHtml("<HТМL>"
"<BODY BGCOLOR=YELLOW>"
"<CENTER><IMG SRC=\"android_logo.png\"></CENTER>"
"<H2><CENТER>Gnome Poem</CENТER></H2>"
"<FONТ COLOR=BLUE>"
"<Р ALIGN=\"center\">"
"<I>"
"Magic! Magic'<BR>"
"Magic! Magic!<BR>"
"Magic! Magic!<BR>"
                "Who doesn't long for someone to hold\n\
                Who knows how to love you without being told\n\
                Somebody tell me why I'm on my own\n\
                If there's a soulmate for everyone\n\
                \n\
                Here we are again, circles never end\n\
                How do I find the perfect fit\n\
                There's enough for everyone\n\
                But I'm still waiting in line\n\
                \n\
                Who doesn't long for someone to hold\n\
                Who knows how to love you without being told\n\
                Somebody tell me why I'm on my own\n\
                If there's a soulmate for everyone"
"</I>"
"</Р>"
"</FONТ>"
"</BODY>"
"</HTML>"
);
txt.resize(320, 350);
txt. show ();

    return a.exec();
}
