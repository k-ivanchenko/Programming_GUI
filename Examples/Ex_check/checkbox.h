#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>

class checkbox : public QWidget
{
    Q_OBJECT

private:
    QCheckBox * chbox2;
    QCheckBox * chbox3;
    QLabel *lbl2;
    QLabel *lbl3;

public:
checkbox (QWidget *parent = 0);
public slots:
void ReadState2 (bool state);
void ReadState3(int state);
};
#endif // CHECKBOX_H
