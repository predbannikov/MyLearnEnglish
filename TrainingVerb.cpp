#include "trainingverb.h"

#define VERB_TENSES_COUNT   5

TrainingVerb::TrainingVerb()
{

}

void TrainingVerb::begin(int number)
{

    clear();
    eVerbTenses = VERB_TENSES(rand() % VERB_TENSES_COUNT);


    switch (eVerbTenses)
    {
    case VERB_PRESENT_CONTINUOUS:
        qDebug() << "настоящее длительное";
        break;
    case VERB_PRESENT_SIMPLE:
        qDebug() << "настоящее простое";
        break;
    case VERB_PAST_CONTINUOUS:
        qDebug() << "прошлое продолжительное";
        break;
    case VERB_PAST_SIMPLE:
        qDebug() << "прошлое простое";
        break;
    case VERB_PRESENT_PERFECT:
        qDebug() << "настоящее совершенное";
        break;
    }

    pronouns();
    if(!m_pronouns.isRight()) {
        qDebug() << "Ошибка, правильно будет: " << m_pronouns.wordRight;
        clearCinBuff();
        return;
    }
    qDebug() << getString();
    addPronouns();
    if(!m_addPronouns.isRight()) {
        qDebug() << "Ошибка, правильно будет: " << getStringRight();
        clearCinBuff();
        return;
    }
    qDebug() << getString();
    doWord();
    if(!m_doWord.isRight()) {
        qDebug() << "Ошибка, правильно будет: " << getStringRight();
        clearCinBuff();
        return;
    }
    clearCinBuff();

}

void TrainingVerb::clearCinBuff()
{
    std::string str;
    std::getline(std::cin, str);
}

void TrainingVerb::setPronouns(QString aStr, QString aRightStr) {
    m_pronouns.wordResponse = aStr;
    m_pronouns.wordRight = aRightStr;
}

void TrainingVerb::setAddPronouns(QString aStr, QString aRightStr) {
    m_addPronouns.wordResponse = aStr;
    m_addPronouns.wordRight = aRightStr;
}

void TrainingVerb::setDoWord(QString aStr, QString aRightStr) {
    m_doWord.wordResponse = aStr;
    m_doWord.wordRight = aRightStr;
}

void TrainingVerb::setCompletionDoWord(QString aStr, QString aRightStr) {
    completionDoWord.wordResponse = aStr;
    completionDoWord.wordRight = aRightStr;
}

QString TrainingVerb::getString() {
    QString str = QString("%1 %2 %3 %4").arg(m_pronouns.wordResponse).arg(m_addPronouns.wordResponse).arg(m_doWord.wordResponse).arg(completionDoWord.wordResponse);
    return str;
}

QString TrainingVerb::getStringRight() {
    QString str = QString("%1 %2 %3 %4").arg(m_pronouns.wordRight).arg(m_addPronouns.wordRight).arg(m_doWord.wordRight).arg(completionDoWord.wordRight);
    return str;
}

void TrainingVerb::clear() {
    eVerbTenses = VERB_TENSES_NON;
    m_pronouns.wordResponse.clear();
    m_pronouns.wordRight.clear();
    m_pronouns.ePronouns = PRONOUNS_NON;
    m_addPronouns.wordResponse.clear();
    m_addPronouns.wordRight.clear();
    m_doWord.wordResponse.clear();
    m_doWord.wordRight.clear();
    m_doWord.eDoWord = DOWORD_NON;
    completionDoWord.wordResponse.clear();
    completionDoWord.wordRight.clear();
}

void TrainingVerb::pronouns()
{
    m_pronouns.ePronouns = PRONOUNS(rand() % 3);
    switch (m_pronouns.ePronouns) {
    case PRONOUNS_I: {
        qDebug() << "Я";
        setPronouns(readString(), "i");
        break;
    }
    case PRONOUNS_HE: {
        switch(rand()%3) {
        case 0: {
            qDebug() << "Он";
            setPronouns(readString(), "he");
            break;
        }
        case 1: {
            qDebug() << "Она";
            setPronouns(readString(), "she");
            break;
        }
        case 2: {
            qDebug() << "Оно";
            setPronouns(readString(), "it");
            break;
        }

        }
        break;
    }
    case PRONOUNS_WE: {
        switch(rand()%3) {
        case 0: {
            qDebug() << "Мы";
            setPronouns(readString(), "we");
            break;
        }
        case 1: {
            if(rand()%2 == 0) {
                qDebug() << "Вы";
            } else {
                qDebug() << "Ты";
            }
            setPronouns(readString(), "you");
            break;
        }
        case 2: {
            qDebug() << "Они";
            setPronouns(readString(), "they");
            break;
        }

        }
        break;
    }
    }
}


void TrainingVerb::addPronouns()
{
//    m_pronouns.eAddPronouns = ADDPRONOUNS(rand() % 2);
    qDebug() << "добавочный слог";
    switch (eVerbTenses) {
    case VERB_PRESENT_CONTINUOUS:               // VERB_PRESENT_CONTINUOUS
        switch (m_pronouns.ePronouns) {
        case PRONOUNS_I:
            setAddPronouns(readString(), "am");
            break;
        case PRONOUNS_HE:
            setAddPronouns(readString(), "is");
            break;
        case PRONOUNS_WE:
            setAddPronouns(readString(), "are");
            break;
        case PRONOUNS_NON:
            qDebug() << "PRONOUNS_NON";
            break;
        default:
            qDebug() << "presentContinuous:VERB_PRESENT_CONTINUOUS switch -> default";
            break;
        }
        break;
    case VERB_PRESENT_SIMPLE:                   // VERB_PRESENT_SIMPLE
        switch (m_pronouns.ePronouns) {
        case PRONOUNS_I:
            setAddPronouns(readString(), "");
            break;
        case PRONOUNS_HE:
            setAddPronouns(readString(), "");
            break;
        case PRONOUNS_WE:
            setAddPronouns(readString(), "");
            break;
        case PRONOUNS_NON:
            qDebug() << "PRONOUNS_NON";
            break;
        default:
            qDebug() << "presentContinuous:VERB_PRESENT_SIMPLE switch -> default";
            break;
        }
        break;
    case VERB_PAST_CONTINUOUS:                   // VERB_PAST_CONTINUOUS
        switch (m_pronouns.ePronouns) {
        case PRONOUNS_I:
        case PRONOUNS_HE:
            setAddPronouns(readString(), "was");
            break;
        case PRONOUNS_WE:
            setAddPronouns(readString(), "were");
            break;
        case PRONOUNS_NON:
            qDebug() << "PRONOUNS_NON";
            break;
        default:
            qDebug() << "presentContinuous:VERB_PAST_CONTINUOUS switch -> default";
            break;
        }
        break;
    case VERB_PAST_SIMPLE:                      // VERB_PAST_SIMPLE
        switch (m_pronouns.ePronouns) {
        case PRONOUNS_I:
        case PRONOUNS_HE:
        case PRONOUNS_WE:
            setAddPronouns(readString(), "did");
            break;
        case PRONOUNS_NON:
            qDebug() << "PRONOUNS_NON";
            break;
        default:
            qDebug() << "presentContinuous:VERB_PAST_SIMPLE switch -> default";
            break;
        }
        break;
    case VERB_PRESENT_PERFECT:                  // VERB_PRESENT_PERFECT
        switch (m_pronouns.ePronouns) {
        case PRONOUNS_I:
        case PRONOUNS_WE:
            setAddPronouns(readString(), "have");
            break;
        case PRONOUNS_HE:
            setAddPronouns(readString(), "has");
            break;
        case PRONOUNS_NON:
            qDebug() << "PRONOUNS_NON";
            break;
        default:
            qDebug() << "presentContinuous:VERB_PAST_SIMPLE switch -> default";
            break;
        }
        break;
    case VERB_TENSES_NON:
        qDebug() << "VERB_TENSES_NON";
        break;
    default:
        qDebug() << "m_addPronouns -> default:";
        break;
    }
}

void TrainingVerb::doWord()
{
    m_doWord.eDoWord = DOWORD(rand() % 1);
    switch(m_doWord.eDoWord) {
    case DOWORD_DO:
        qDebug() << "включить слово <делать>";
        switch(eVerbTenses) {
        case VERB_PAST_CONTINUOUS:
        case VERB_PRESENT_CONTINUOUS:
            setDoWord(readString(), "doing");
            break;
        case VERB_PRESENT_SIMPLE:
            switch (m_pronouns.ePronouns) {
            case PRONOUNS_I:
            case PRONOUNS_WE:
                setDoWord(readString(), "do");
                break;
            case PRONOUNS_HE:
                setDoWord(readString(), "does");
                break;
            }
            break;
        case VERB_PAST_SIMPLE:
            switch (m_pronouns.ePronouns) {
            case PRONOUNS_I:
            case PRONOUNS_HE:
            case PRONOUNS_WE:
                setDoWord(readString(), "doed");
                break;
            }
            break;
        case VERB_PRESENT_PERFECT:
            switch (m_pronouns.ePronouns) {
            case PRONOUNS_I:
            case PRONOUNS_HE:
            case PRONOUNS_WE:
                setDoWord(readString(), "done");
                break;
            }
            break;
        default:
            qDebug() << "m_pronouns.ePronouns -> default:";
            break;
        }
        break;
    case DOWORD_READ:
        qDebug() << "включить слово <читать>";
        setDoWord(readString(), "reading");
        break;
    case DOWORD_NON:
        qDebug() << "DOWORD_NON";
        break;
    default:
        qDebug() << "m_doWord -> default:";
        break;

    }

}
