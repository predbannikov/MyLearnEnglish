#ifndef PLURALNOUNS_H
#define PLURALNOUNS_H

#include "baseaction.h"


class Nouns : public BaseAction
{
    enum SECTION {SECTION_PLURAL } section;

    struct WordPair {
        WordPair(QString arg1, QString arg2) {
            word1 = arg1;
            word2 = arg2;
        }
        QString word1;
        QString word2;
    };

    struct WordMap {
        WordMap(QString arg1, QString arg2, QString arg3, QString arg4) {
            word1 = arg1;
            word2 = arg2;
            word3 = arg3;
            word4 = arg4;
        }
        QString word1;
        QString word2;
        QString word3;
        QString word4;
    };

    typedef  WordMap IrregularVerbs;

    struct ExpressionPluar : public Expression{
        SECTION ePlural;
    };

public:
    Nouns();
    QList<WordMap> wList;
    virtual void begin() override;

signals:

};

#endif // PLURALNOUNS_H
