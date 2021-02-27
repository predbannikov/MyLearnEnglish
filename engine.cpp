#include "engine.h"

#include "trainingverb.h"
#include "nouns.h"

#define MAX_QUEST   1
#define START_QUEST 0

Engine::Engine(QObject *object) : QObject(object)
{
    std::srand(time(nullptr));
    delyaTime = 0;
}

void Engine::begin()
{
    int choice = 0;
    QVector<int> vecChoice;
    while(!vecChoice.size()) {
        qDebug() << "Выбирите какие тесты вы хотите включить";
        qDebug() << "0001 схемы предложений с временами глаголов";
        qDebug() << "0010 слова для повторения";
        std::cin >> choice;

        if(choice == 1) {
            qDebug() << "времена";
            vecChoice.append(1);
        } else if(choice == 2) {
            qDebug() << "слова";
            vecChoice.append(2);
        } else if(choice == 3) {
            qDebug() << "времена + слова";
            vecChoice.append(1);
            vecChoice.append(2);
        }
    }

    std::string vnull;
    std::getline(std::cin, vnull);

    struct {
        int err = 0;
        int right = 0;
        int num = 0;
    } right;
    for (int i = 0; i < 10000; i++) {
        right.num++;
        saveTime = QDateTime::currentDateTime();

        int quest = rand() % vecChoice.size();
        BaseAction *baseAction;
        switch (vecChoice[quest]) {
        case 1:
            qDebug() <<  "\nНаписать схему построения предложения для ";
            baseAction = new TrainingVerb;
            break;
        case 2:
            qDebug() <<  "\nМножественное число существительных ";
            baseAction = new Nouns;
            break;
        }
        baseAction->init();
        baseAction->begin();
        qDebug() << baseAction->getString() << " | " << baseAction->getStringRight();
        if(baseAction->isRight()) {
            right.right++;
            qDebug() << "Правильно!";
        } else {
            right.err++;
            qDebug() << "Не правильно";
        }



        qint64 dif = saveTime.msecsTo(QDateTime::currentDateTime());
        delyaTime += dif;
        qDebug() << "";
        qDebug() << QString("%1%2%3 правильно = %4, ошибок = %5").arg("", 35).arg("Всего вопросов = ").arg(right.num).arg(right.right).arg(right.err);
        qDebug() << QString("%1%2%3 Общее потраченное время %4").arg("", 35)
                            .arg("Время на раздумье вопроса ")
                            .arg(QDateTime::fromMSecsSinceEpoch(dif).toString("mm:ss"))
                            .arg(QDateTime::fromMSecsSinceEpoch(delyaTime).toString("mm:ss"));
        qDebug() << "";
    }
}
