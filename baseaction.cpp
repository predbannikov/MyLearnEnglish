#include "baseaction.h"

BaseAction::BaseAction()
{

}

BaseAction::~BaseAction()
{
    delete expression;
    expression = nullptr;
}

QString BaseAction::getStringRight()
{
    QString str = QString("%1").arg(expression->wordRight);
    return str;
}

void BaseAction::init()
{
    if(expression == nullptr) {
        expression = new Expression;
    }
}

QString BaseAction::getString()
{
    QString str = QString("%1").arg(expression->wordResponse);
    return str;
}

bool BaseAction::isRight()
{
    QString str1 = getString();
    str1.remove('-');   //  new
    QString str2 = getStringRight();
    str2.remove('-');   //  new
    QStringList list1 = str1.split(",");
    QStringList list2 = str2.split(",");
    for(int i = 0; i < list2.size(); i++) {
        list2[i] = list2[i].trimmed();
    }
    bool done;
    for(int a = 0; a < list1.size(); a++) {
        done = false;
//        for(int b = 0; b < list2.size(); b++) {
            if(list2.contains(list1[a].trimmed()))
                done = true;
//        }

        if(!done)
            break;
    }
//    qDebug() << "stop";
    return done;
//    return getString().simplified() == getStringRight().simplified();
}

QString BaseAction::readString()
{
    std::string response;
//    getline(std::cin, response);
    std::cin >> response;
    QString result = QString::fromStdString(response).toLower().simplified();
    return result;
}


