﻿#ifndef BUTTON_ANSWER_H
#define BUTTON_ANSWER_H

#include <QPushButton>
#include <QString>
class Button_answer:public QPushButton
{
protected:
public:
    Button_answer(QWidget *parent);
    void setPlain(void);
    void setOver(void);
    void setChosen(void);
    void setFault(void);
    void setRight(void);
};

#endif // BUTTON_ANSWER_H