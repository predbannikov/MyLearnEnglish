#include "questions.h"

Questions::Questions()
{

    questList.append(TwoWords("what", "что, какой"));
    questList.append(TwoWords("who", "кто"));
    questList.append(TwoWords("where", "где, куда"));
    questList.append(TwoWords("when", "когда"));
    questList.append(TwoWords("why", "почему, зачем"));
    questList.append(TwoWords("how", "как, каким образом"));

}

void Questions::begin()
{
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

