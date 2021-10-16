#include "irregulartake.h"

IrregularTake::IrregularTake()
{
    irrList.append(WordFours("arise", "arose", "arisen", "подниматься"));
    irrList.append(WordFours("awake", "awoke", "awoken", "пробуждать"));
    irrList.append(WordFours("be", "was(were)", "been", "быть"));
    irrList.append(WordFours("bear", "bore", "born", "рожать, переносить"));
    irrList.append(WordFours("beat", "beat", "beaten", "бить"));
    irrList.append(WordFours("become", "became", "become", "становиться"));
    irrList.append(WordFours("begin", "began", "begun", "начинать"));
    irrList.append(WordFours("bend", "bent", "bent", "наклонять"));
    irrList.append(WordFours("bet", "bet", "bet", "заключать пари"));
    irrList.append(WordFours("bind", "bound", "bound", "связывать"));
    irrList.append(WordFours("bite", "bit", "bitten", "кусать"));
    irrList.append(WordFours("bleed", "bled", "bled", "кровоточить"));
    irrList.append(WordFours("blow", "blew", "blown", "дуть"));
    irrList.append(WordFours("break", "broke", "broken", "ломать"));
    irrList.append(WordFours("breed", "bred", "bred", "разводить животных"));
    irrList.append(WordFours("bring", "brought", "brought", "приносить"));
    irrList.append(WordFours("build", "built", "built", "строить"));
    irrList.append(WordFours("buy", "bought", "bought", "покупать"));
    irrList.append(WordFours("can", "could", "could", "мочь физически"));
    irrList.append(WordFours("catch", "caught", "caught", "ловить"));
    irrList.append(WordFours("choose", "chose", "chosen", "выбирать"));
    irrList.append(WordFours("cling", "clung", "clung", "цепляться"));
    irrList.append(WordFours("clothe", "clothed", "clothed", "одеть, одевать"));
    irrList.append(WordFours("come", "came", "come", "приходить"));
    irrList.append(WordFours("cost", "cost", "cost", "стоить"));
    irrList.append(WordFours("cut", "cut", "cut", "резать"));
    irrList.append(WordFours("deal", "dealt", "dealt", "вести дела"));
    irrList.append(WordFours("dig", "dug", "dug", "копать"));
    irrList.append(WordFours("do", "did", "done", "делать"));
    irrList.append(WordFours("draw", "drew", "drawn", "рисовать, тянуть"));
    irrList.append(WordFours("drink", "drank", "drunk", "пить"));
    irrList.append(WordFours("drive", "drove", "driven", "водить автомобиль"));
    irrList.append(WordFours("dive", "dove", "dived", "нырять"));
    irrList.append(WordFours("eat", "ate", "eaten", "кушать"));
    irrList.append(WordFours("fall", "fell", "fallen", "падать"));
    irrList.append(WordFours("feed", "fed", "fed", "кормить"));
    irrList.append(WordFours("feel", "felt", "felt", "чувствовать"));
    irrList.append(WordFours("fight", "fought", "fought", "бороться"));
    irrList.append(WordFours("find", "found", "found", "находить"));
    irrList.append(WordFours("flee", "fled", "fled", "сбегать"));
    irrList.append(WordFours("fly", "flew", "flown", "летать"));
    irrList.append(WordFours("forbid", "forbade", "forbidden", "запрещать"));
    irrList.append(WordFours("forget", "forgot", "forgotten", "забывать"));
    irrList.append(WordFours("forgive", "forgave", "forgiven", "прощать"));
    irrList.append(WordFours("freeze", "froze", "frozen", "замораживать"));
    irrList.append(WordFours("get", "got", "got (gotten)", "получать"));
    irrList.append(WordFours("give", "gave", "given", "давать"));
    irrList.append(WordFours("go", "went", "gone", "идти"));
    irrList.append(WordFours("grow", "grew", "grown", "расти"));
    irrList.append(WordFours("hang", "hung", "hung", "висеть"));
    irrList.append(WordFours("have", "had", "had", "иметь"));
    irrList.append(WordFours("hear", "heard", "heard", "слышать"));
    irrList.append(WordFours("hide", "hid", "hidden", "прятать"));
    irrList.append(WordFours("hit", "hit", "hit", "ударять, попадать"));
    irrList.append(WordFours("hold", "held", "held", "держать"));
    irrList.append(WordFours("hurt", "hurt", "hurt", "причинять боль"));
    irrList.append(WordFours("keep", "kept", "kept", "сохранять, соблюдать"));
    irrList.append(WordFours("know", "knew", "known", "знать"));
    irrList.append(WordFours("lay", "laid", "laid", "класть, стелить"));
    irrList.append(WordFours("lead", "led", "led", "вести, лидировать"));
    irrList.append(WordFours("learn", "learnt (learned)", "learnt (learned)", "учиться, узнавать"));
    irrList.append(WordFours("leave", "left", "left", "покидать, оставлять"));
    irrList.append(WordFours("lend", "lent", "lent", "давать взаймы"));
    irrList.append(WordFours("let", "let", "let", "позволять"));
    irrList.append(WordFours("lie", "lay", "lain", "класть"));
    irrList.append(WordFours("light", "lit", "lit", "зажигать, освещать"));
    irrList.append(WordFours("lose", "lost", "lost", "терять"));
    irrList.append(WordFours("make", "made", "made", "делать, мастерить"));
    irrList.append(WordFours("mean", "meant", "meant", "значить"));
    irrList.append(WordFours("meet", "met", "met", "встречать, знакомиться"));
    irrList.append(WordFours("pay", "paid", "paid", "платить"));
    irrList.append(WordFours("put", "put", "put", "класть, ставить"));
    irrList.append(WordFours("read", "read", "read", "читать"));
    irrList.append(WordFours("ride", "rode", "ridden", "ездить верхом"));
    irrList.append(WordFours("ring", "rang", "rung", "звонить"));
    irrList.append(WordFours("rise", "rose", "risen", "возрастать, подниматься"));
    irrList.append(WordFours("run", "ran", "run", "бежать"));
    irrList.append(WordFours("say", "said", "said", "сказать"));
    irrList.append(WordFours("see", "saw", "seen", "видеть"));
    irrList.append(WordFours("seek", "sought", "sought", "искать"));
    irrList.append(WordFours("sell", "sold", "sold", "продавать"));
    irrList.append(WordFours("send", "sent", "sent", "посылать"));
    irrList.append(WordFours("set", "set", "set", "устанавливать"));
    irrList.append(WordFours("shake", "shook", "shaken", "трясти"));
    irrList.append(WordFours("shine", "shone", "shone", "светить, сиять"));
    irrList.append(WordFours("shoot", "shot", "shot", "стрелять, снимать"));
    irrList.append(WordFours("show", "showed", "shown", "показывать"));
    irrList.append(WordFours("shrink", "shrank", "shrunk", "сжиматься"));
    irrList.append(WordFours("shut", "shut", "shut", "закрывать, затворять"));
    irrList.append(WordFours("sing", "sang", "sung", "петь"));
    irrList.append(WordFours("sit", "sat", "sat", "сидеть"));
    irrList.append(WordFours("sleep", "slept", "slept", "спать"));
    irrList.append(WordFours("slide", "slid", "slid", "скользить"));
    irrList.append(WordFours("smell", "smelt", "smelt", "пахнуть, нюхать"));
    irrList.append(WordFours("speak", "spoke", "spoken", "говорить"));
    irrList.append(WordFours("spell", "spelt (spelled)", "spelt (spelled)", "произносить или писать по буквам"));
    irrList.append(WordFours("spend", "spent", "spent", "тратить, проводить время"));
    irrList.append(WordFours("spill", "spilt (spilled)", "spilt (spilled)", "разлить"));
    irrList.append(WordFours("spin", "spun", "spun", "крутить"));
    irrList.append(WordFours("split", "split", "split", "разделять, раскалывать"));
    irrList.append(WordFours("spoil", "spoilt (spoiled)", "spoilt (spoiled)", "портить"));
    irrList.append(WordFours("spread", "spread", "spread", "разворачивать, распространять"));
    irrList.append(WordFours("stand", "stood", "stood", "стоять"));
    irrList.append(WordFours("steal", "stole", "stolen", "воровать"));
    irrList.append(WordFours("sting", "stung", "stung", "жалить"));
    irrList.append(WordFours("stink", "stank", "stunk", "вонять"));
    irrList.append(WordFours("strike", "struck", "struck", "бастовать, ударять"));
    irrList.append(WordFours("swear", "swore", "sworn", "клясться, ругаться"));
    irrList.append(WordFours("sweep", "swept", "swept", "подметать"));
    irrList.append(WordFours("swell", "swelled", "swollen (swelled)", "опухать"));
    irrList.append(WordFours("swim", "swam", "swum", "плавать"));
    irrList.append(WordFours("take", "took", "taken", "брать"));
    irrList.append(WordFours("teach", "taught", "taught", "обучать"));
    irrList.append(WordFours("tear", "tore", "torn", "рвать"));
    irrList.append(WordFours("tell", "told", "told", "рассказывать"));
    irrList.append(WordFours("think", "thought", "thought", "думать"));
    irrList.append(WordFours("throw", "threw", "thrown", "бросать"));
    irrList.append(WordFours("understand", "understood", "understood", "понимать"));
    irrList.append(WordFours("wake", "woke", "woken", "будить"));
    irrList.append(WordFours("wear", "wore", "worn", "носить (одежду)"));
    irrList.append(WordFours("win", "won", "won", "побеждать"));
    irrList.append(WordFours("wind", "wound", "wound", "обматывать, изгибаться"));
    irrList.append(WordFours("write", "wrote", "written", "писать"));

}

//bool IrregularTake::isRight()
//{
//    QString("%1, %2, %3").arg(irrList[index])
//}


void IrregularTake::begin(int number)
{
//    SECTION quest = SECTION(rand()%SECTION_COUNT);
    SECTION quest = SECTION(rand()%1 + 4);
    QString str;

    switch (quest) {
    case SECTION_FORM1:
        qDebug() <<  "\nНаписать все формы неправельных глаголов ";
        index = rand()%irrList.size();
        qDebug() << irrList[index].word4;
        expression->setLine(QString("%1, %2, %3").arg(irrList[index].word1).arg(irrList[index].word2).arg(irrList[index].word3));
        break;
    case SECTION_FORM2:
        qDebug() <<  "\nНаписать первую форму неправельного глагола ";
        index = rand()%irrList.size();
        qDebug() << irrList[index].word4;
        expression->setLine(QString("%1").arg(irrList[index].word1));
        break;
    case SECTION_FORM3:
        qDebug() <<  "\nНаписать вторую форму неправельного глагола ";
        index = rand()%irrList.size();
        qDebug() << irrList[index].word4;
        expression->setLine(QString("%1").arg(irrList[index].word2));
        break;
    case SECTION_FORM4:
        qDebug() <<  "\nНаписать третью форму неправельного глагола ";
        index = rand()%irrList.size();
        qDebug() << irrList[index].word4;
        expression->setLine(QString("%1").arg(irrList[index].word3));
        break;
    case SECTION_TRANSLATE:
        index = rand()%irrList.size();
        int iCaseWord = rand()%3;
        switch (iCaseWord) {
        case 0:
            qDebug() <<  "\Перевести 1-ю форму глагола: " << irrList[index].word1;
            break;
        case 1:
            qDebug() <<  "\Перевести 2-ю форму глагола: " << irrList[index].word2;
            break;
        case 2:
            qDebug() <<  "\Перевести 3-ю форму глагола: " << irrList[index].word3;
            break;
        }
        expression->setLine(QString("%1").arg(irrList[index].word4));
        qDebug() << irrList[index].word1 + " " + irrList[index].word2 + " " + irrList[index].word3;

        break;
    }

}

