#include "checkbox.h"

checkbox:: checkbox (QWidget *parent) : QWidget (parent)
{
chbox2=new QCheckBox("TwoState",this);
chbox2->move (10,10);
chbox2->setChecked (true) ;
chbox3 = new QCheckBox("TriState",this);
chbox3->setTristate (true);
chbox3->move (10, 40) ;


lbl2 = new QLabel ("Checked", this);
lbl2->move (80,13);
lbl3 = new QLabel ("Unchecked", this);
lbl3->setGeometry (80,43,100,14);
resize(200,100);


connect (chbox2, SIGNAL(toggled(bool)), this, SLOT (ReadState2 (bool)));
connect (chbox3, SIGNAL(stateChanged(int)), this,
SLOT (ReadState3(int)));
}
void checkbox::ReadState2 (bool state)
{
QString str;
switch(state)
{
case false:
str = "Unchecked";
break;
case true:
str = "Checked";
break;
}
lbl2->setText (str);}


void checkbox::ReadState3(int state)
{
QString str;
switch (state)
{
case Qt::Unchecked:
str = "Unchecked";
break;
case Qt::PartiallyChecked:
str = "PartiallyChecked";
break;
case Qt::Checked:
str = "Checked";
break;
}
lbl3->setText (str);
}
