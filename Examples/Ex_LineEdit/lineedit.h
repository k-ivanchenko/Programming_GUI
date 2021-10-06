#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <QWidget>
#include <QLabel>
#include <QRadioButton>
#include <QButtonGroup>
#include <QLineEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QValidator>
#include <QIntValidator>

class MyValidator:public QValidator
{
public:
    MyValidator (QObject *parent=0):QValidator (parent) {}
    State validate (QString &str, int &pos) const
    {
        pos=str.length();
        if (str.length()>5)
            return Invalid;
        else return Acceptable;
    }
};

class lineedit : public QWidget
{
    Q_OBJECT
private:
    enum {nRbtn=3};
    QRadioButton *rbtn[nRbtn];
    QButtonGroup *bgroup;
    QLineEdit *edit1;
    QLineEdit *edit2;
    QLineEdit *edit3;
    QLabel *lbl1;
    QLabel *lbl2;
    QLabel *lbl3;
    QIntValidator *ivr;
    MyValidator *mvr;
    QSpinBox *spin;
    QDoubleSpinBox *dspin;
public:
    lineedit(QWidget *parent = nullptr);
    ~lineedit();
public slots:
    void setTitle (const QString &title);
    void EchoMode (QAbstractButton *button);
};
#endif // LINEEDIT_H
