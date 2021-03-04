#ifndef QUESTIONS_H
#define QUESTIONS_H

#include "baseaction.h"


class Questions: public BaseAction
{
    QList<TwoWords> questList;
    enum SECTION {SECTION_RUS, SECTION_ENG,
                  SECTION_COUNT } section;

public:
    Questions();
    virtual void begin() override;

};

#endif // QUESTIONS_H
