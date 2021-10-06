#include "lineedit.h"

lineedit::lineedit(QWidget *parent)
    : QWidget(parent)
{
    bgroup=new QButtonGroup (this);
    QString text[nRbtn]={"Normal", "NoEcho", "Password"};
    for (int i=0; i<nRbtn;i++)
    {rbtn[i]=new QRadioButton (text[i],this);
     rbtn[i]->move(10+i*70, 10);
     bgroup->addButton(rbtn[i]);
}
    rbtn[0]->setChecked(true);

    edit1=new QLineEdit(this);
    edit1->move(40,40);
    edit2=new QLineEdit(this);
    edit2->move(40,80);
    edit3=new QLineEdit(this);
    edit3->move(40,120);

    lbl1=new QLabel ("edit&1",this);
    lbl1->move(10,40);
    lbl1->setBuddy(edit1);

    lbl2=new QLabel ("edit&2",this);
    lbl2->move(10,80);
    lbl2->setBuddy(edit2);

    lbl3=new QLabel ("edit&3",this);
    lbl3->move(10,120);
    lbl3->setBuddy(edit3);

    spin=new QSpinBox (this);
    spin->move(180,40);
    spin->setMinimum(-10);
    spin->setMaximum(10);
    spin->setSingleStep(2);
    spin->setPrefix("[");
    spin->setSuffix(")");
    lbl3->setBuddy(spin);

     dspin=new QDoubleSpinBox (this);
    dspin->move(230,40);
    dspin->setMinimum(-10.0);
    dspin->setMaximum(10.0);
    dspin->setDecimals(1);
    dspin->setSingleStep(0.1);

    resize(290,150);

    ivr=new QIntValidator(10,100,this);
    edit2->setValidator(ivr);
    mvr=new MyValidator(this);
    edit3->setValidator(mvr);


    connect(edit1, SIGNAL(textChanged(const QString &)),this, SLOT(setTitle(const QString &)));
    connect(edit2, SIGNAL(textChanged(const QString &)),this, SLOT(setTitle(const QString &)));
    connect(edit3, SIGNAL(textChanged(const QString &)),this, SLOT(setTitle(const QString &)));
    connect(bgroup, SIGNAL(buttonClicked(QAbstractButton *)),this, SLOT(EchoMode(QAbstractButton *)));

    connect(spin, SIGNAL(valueChanged(const QString &)),edit1, SLOT(setText(const QString &)));
    connect(dspin, SIGNAL(valueChanged(const QString &)),edit1, SLOT(setText(const QString &)));
  }

void lineedit::setTitle(const QString &title)
{
    setWindowTitle(title);
}

void lineedit::EchoMode(QAbstractButton *button)
{
    QLineEdit::EchoMode mode=QLineEdit::Normal;
    if (button==rbtn[0])
        mode=QLineEdit::Normal;
    else if (button==rbtn[1])
        mode=QLineEdit::NoEcho;
    else if (button==rbtn[2])
        mode=QLineEdit::Password;

    edit1->setEchoMode(mode);
    edit2->setEchoMode(mode);
    edit3->setEchoMode(mode);


}



lineedit::~lineedit()
{
}

