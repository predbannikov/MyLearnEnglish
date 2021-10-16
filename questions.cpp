#include "questions.h"

Questions::Questions()
{

    questList.append(TwoWords("what", "что, какой"));
    questList.append(TwoWords("who", "кто"));
    questList.append(TwoWords("where", "где, куда"));
    questList.append(TwoWords("when", "когда"));
    questList.append(TwoWords("why", "почему, зачем"));
    questList.append(TwoWords("how", "как, каким образом"));
    questList.append(TwoWords("me", "меня, мне"));
    questList.append(TwoWords("my", "мой"));
    questList.append(TwoWords("your", "твой"));
    questList.append(TwoWords("his", "его"));
    questList.append(TwoWords("him", "его, ему"));
    questList.append(TwoWords("her", "её, ей"));
    questList.append(TwoWords("us", "нас, нам"));
    questList.append(TwoWords("our", "наш"));
    questList.append(TwoWords("them", "их, им"));
    questList.append(TwoWords("their", "их"));
    questList.append(TwoWords("here", "здесь, сюда"));
    questList.append(TwoWords("there", "там, туда"));
    questList.append(TwoWords("this", "этот"));
    questList.append(TwoWords("that", "тот"));
    questList.append(TwoWords("these", "эти"));
    questList.append(TwoWords("those", "те"));
    questList.append(TwoWords("such a", "такой"));
    questList.append(TwoWords("such", "такие"));
    questList.append(TwoWords("the same", "тот самый, те самые"));
    questList.append(TwoWords("another", "другой"));
    questList.append(TwoWords("i mean", "я полагаю"));
    questList.append(TwoWords("sort of", "вроде, как бы"));
    questList.append(TwoWords("like", "похожий"));

    questList.append(TwoWords("we regret", "мы сожалеем"));
    questList.append(TwoWords("we apologize", "мы приносим извенения"));

    questList.append(TwoWords("good morning", "доброе утро"));
    questList.append(TwoWords("good afternoon", "добрый день"));
    questList.append(TwoWords("good evening", "добрый вечер"));
    questList.append(TwoWords("good night", "доброй ночи"));

    questList.append(TwoWords("so long", "пока"));
    questList.append(TwoWords("farewell", "прощайте"));

    questList.append(TwoWords("old", "старый"));
    questList.append(TwoWords("older", "старше"));
    questList.append(TwoWords("the oldest", "самый старый, старейший"));
    questList.append(TwoWords("more", "больше"));
    questList.append(TwoWords("most likely", "скорее всего"));


}

void Questions::begin(int number)
{

//    expression->setLine("там, туда");
//    return;

    SECTION quest = SECTION(rand()%SECTION_COUNT);
    QString str;
    int index = 0;
    switch (quest) {
    case SECTION_RUS:
        index = rand()%questList.size();
        qDebug() << questList[index].word2;
        expression->setLine(questList[index].word1);
        break;
    case SECTION_ENG:
        index = rand()%questList.size();
        qDebug() << questList[index].word1;

        expression->setLine(questList[index].word2);
        break;
    }
    qDebug() << expression->wordResponse;
}

