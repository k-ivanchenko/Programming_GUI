#include "radiobtn.h"

radiobtn::radiobtn(QWidget *parent)
    : QWidget(parent)
{

    rbtn1 = new QRadioButton("1",this) ;
rbtn1->move (10,10);
rbtn1->setChecked (true) ;
rbtn2 = new QRadioButton("2",this);
rbtn2->move (10,40);
rbtn3 = new QRadioButton("3",this);
rbtn3->move (10,70);
rbtn[0] =new QRadioButton("4",this) ;
rbtn[0]->move (70,10);
rbtn[1] = new QRadioButton("5",this);
rbtn[1]->move (70,40);
rbtn[2] = new QRadioButton("6",this);
rbtn[2]->move (70,70);
bgroup = new QButtonGroup (this);
bgroup->addButton(rbtn[0]);
bgroup->addButton(rbtn[1]);
bgroup->addButton(rbtn[2]);
resize(100,100);
setWindowTitle("1");
connect (rbtn1, SIGNAL(toggled(bool)), this, SLOT(click1(bool)));
connect (rbtn2, SIGNAL(clicked()), this, SLOT(click2()));
connect (rbtn3, SIGNAL(pressed()), this, SLOT(click3()));
connect (bgroup, SIGNAL (buttonClicked(QAbstractButton *)), this,
SLOT (click46 (QAbstractButton *)));
}
void radiobtn::click1 (bool state)
{
if (state)
setWindowTitle("1");
}
void radiobtn::click2()
{
setWindowTitle("2");
}
void radiobtn::click3()
{
setWindowTitle("3");
}
void radiobtn::click46(QAbstractButton * button)
{
for (int i = 0; i < nRbtn; i++)
if (rbtn[i] == button)
{
setWindowTitle (QString::number(i+4));
break;
}
}
radiobtn::~radiobtn()
{
}

