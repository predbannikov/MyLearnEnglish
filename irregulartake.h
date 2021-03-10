#ifndef IRREGULARTAKE_H
#define IRREGULARTAKE_H

#include "baseaction.h"


class IrregularTake: public BaseAction
{
    enum SECTION {SECTION_FORM1, SECTION_FORM2, SECTION_FORM3, SECTION_FORM4, SECTION_TRANSLATE,
                  SECTION_COUNT } section;
    int index = 0;

public:

    IrregularTake();
    QList<WordFours> irrList;
//    virtual bool isRight() override;
    virtual void begin() override;
};

#endif // IRREGULARTAKE_H
