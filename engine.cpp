#include "engine.h"

#include "trainingverb.h"
#include "irregulartake.h"
#include "nouns.h"
#include "questions.h"

#define MAX_QUEST   1
#define START_QUEST 0

enum ConsoleColor {
Black = 0,
Blue = 1,
Green = 2,
Cyan = 3,
Red = 4,
Magenta = 5,
Brown = 6,
LightGray = 7,
DarkGray = 8,
LightBlue = 9,
LightGreen = 10,
LightCyan = 11,
LightRed = 12,
LightMagenta = 13,
Yellow = 14,
White = 15
};


Engine::Engine(QObject *object) : QObject(object)
{
    std::srand(time(nullptr));
    delyaTime = 0;
}

void Engine::begin()
{
    int choice = 0;
    QVector<int> vecChoice;
    QVector<int> argChoice;

    while(!vecChoice.size()) {
        qDebug() << "Выбирите какие тесты вы хотите включить";
        qDebug() << "0001 схемы предложений с временами глаголов";
        qDebug() << "0010 слова";
        qDebug() << "0011 неправельные глаголы";
        qDebug() << "1111 включеть все тесты";
        std::cin >> choice;

        if(choice == 1) {
            qDebug() << "времена";
            vecChoice.append(1);
        } else if(choice == 2) {
            qDebug() << "слова";
            vecChoice.append(2);
        } else if(choice == 3) {
            qDebug() << "неправельные глаголы";
            vecChoice.append(3);
        } else if(choice == 4) {
            qDebug() << "вопросы";
            vecChoice.append(4);
        } else if(choice == 16) {
            qDebug() << "времена + слова + неправельные глаголы + вопросы";
            vecChoice.append(1);
            vecChoice.append(2);
            vecChoice.append(3);
            vecChoice.append(4);
        }
    }

    std::string vnull;
    std::getline(std::cin, vnull);

    struct {
        int err = 0;
        int right = 0;
        int num = 0;
    } right;

#ifdef _WIN32
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
#elif  __linux__

#endif


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
        case 3:
            baseAction = new IrregularTake;
            break;
        case 4:
            baseAction = new Questions;
            break;
        }
        baseAction->init();
        baseAction->begin();
        if(baseAction->isRight()) {
            right.right++;
#ifdef _WIN32
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Green));
#elif  __linux__

#endif
            qDebug() << "Правильно!";
#ifdef _WIN32
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
#elif  __linux__

#endif


        } else {
            right.err++;
#ifdef _WIN32
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Red));
#elif  __linux__

#endif
            qDebug() << "Не правильно";
            qDebug() <<"ответ: " << baseAction->getStringRight();
#ifdef _WIN32
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
#elif  __linux__

#endif
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

/*

0 = Черный 8 = Серый
1 = Синий 9 = Светло-синий
2 = Зеленый A = Светло-зеленый
3 = Голубой B = Светло-голубой
4 = Красный C = Светло-красный
5 = Лиловый D = Светло-лиловый
6 = Желтый E = Светло-желтый
7 = Белый F = Ярко-белый

*/
