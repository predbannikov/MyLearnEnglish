#include <QCoreApplication>
#include <QTextCodec>
#include <iostream>
#include <cstdlib>
#include <QDebug>
#include <ctime>
#include <QTimer>
#include "engine.h"
#include "Windows.h"

using namespace std;



bool pronouns();
bool addPronouns();
bool doWord();


QString readString()
{
    string response;
    getline(cin, response);
    QString result = QString::fromStdString(response).toLower().simplified();
    return result;
}







// ***************************************************************************
//                                    MAIN
// ***************************************************************************
int main(int argc, char *argv[])
{
#ifdef Q_OS_WIN32
//    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
    SetConsoleCP( 1251 ); // настраиваем кодировку консоли (ввод)
    SetConsoleOutputCP( 1251 ); // (вывод)
    setlocale(LC_ALL,"Rus");
//    std::locale::global(std::locale("1251"));
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
#endif
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

    QCoreApplication a(argc, argv);

    Engine *engine = new Engine;
    QTimer::singleShot(10, engine, &Engine::begin);
    return a.exec();
}

// ***************************************************************************
//
// ***************************************************************************

