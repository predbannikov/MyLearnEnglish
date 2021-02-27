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
    return getString().simplified() == getStringRight().simplified();
}

QString BaseAction::readString()
{
    std::string response;
//    getline(std::cin, response);
    std::cin >> response;
    QString result = QString::fromStdString(response).toLower().simplified();
    return result;
}


