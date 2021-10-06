#ifndef RADIOBTN_H
#define RADIOBTN_H

#include <QWidget>
#include <QLabel>
#include <QRadioButton>
#include <QButtonGroup>

class radiobtn : public QWidget
{
    Q_OBJECT
private:
    QRadioButton * rbtn1;
    QRadioButton * rbtn2;
    QRadioButton * rbtn3;
    enum {nRbtn = 3};
    QRadioButton * rbtn[nRbtn];
    QButtonGroup * bgroup;
public:
    radiobtn(QWidget *parent = nullptr);
    ~radiobtn();

    public slots:
    void click1 (bool state);
    void click2();
    void click3();
    void click46(QAbstractButton * button);
    };


#endif // RADIOBTN_H
