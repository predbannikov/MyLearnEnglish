#ifndef MAKESTRING_H
#define MAKESTRING_H
#include <QObject>
#include <baseaction.h>

enum VERB_TENSES {VERB_PRESENT_CONTINUOUS, VERB_PRESENT_SIMPLE, VERB_PAST_CONTINUOUS, VERB_PAST_SIMPLE, VERB_PRESENT_PERFECT, VERB_TENSES_NON };
enum ADDPRONOUNS {ADDPRONOUNS_IS, ADDPRONOUNS_EMPTY, ADDPRONOUNS_NON};
enum PRONOUNS {PRONOUNS_I, PRONOUNS_HE, PRONOUNS_WE, PRONOUNS_NON};
enum DOWORD {DOWORD_DO, DOWORD_READ, DOWORD_NON};



struct ExpressionWord : Expression{
    ADDPRONOUNS eAddPronouns;
    PRONOUNS ePronouns;
    DOWORD eDoWord;
};

struct ExpressionWordAddPronouns : public ExpressionWord{
    QStringList list = {"do", "does", "work", "read", "write"};
    virtual bool isRight() override {
        if(list.contains(wordResponse.simplified())) {
            for(int i = wordResponse.size() - 1; i >= 0; i--)
                std::cin.putback(wordResponse[i].toLatin1());
            wordResponse.clear();
            return wordResponse.simplified() == wordRight.simplified();
        } else
            return wordResponse.simplified() == wordRight.simplified();

    }
};


class TrainingVerb : public BaseAction{
public:
    TrainingVerb();
    virtual void begin(int number = -1) override;
    virtual QString getString() override;
    virtual QString getStringRight() override;


    VERB_TENSES eVerbTenses;
    void setPronouns(QString aStr, QString aRightStr);
    void setAddPronouns(QString aStr, QString aRightStr);
    void setDoWord(QString aStr, QString aRightStr);
    void setCompletionDoWord(QString aStr, QString aRightStr);
    ExpressionWord m_pronouns;
    ExpressionWordAddPronouns m_addPronouns;
    ExpressionWord m_doWord;
    ExpressionWord completionDoWord;
    void clear();
    void pronouns();
    void addPronouns();
    void doWord();
    void clearCinBuff();
};

#endif // MAKESTRING_H
