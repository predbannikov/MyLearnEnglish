#ifndef BASEACTION_H
#define BASEACTION_H

#include <QObject>
#include <global.h>
#include <QList>

struct Expression {
    QString wordResponse;
    QString wordRight;
    virtual bool isRight() {
        return wordResponse.simplified() == wordRight.simplified();
    }
    virtual void set(QString aRightStr) {
        std::string response;
        std::cin >> response;
        wordResponse = QString::fromStdString(response).toLower().simplified();
        wordRight = aRightStr.simplified();
    }
    virtual void setLine(QString aRightStr) {
        std::string response;
        std::getline(std::cin, response);
        wordResponse = QString::fromStdString(response).toLower().simplified();
        wordRight = aRightStr.simplified();
    }
};

class BaseAction
{
public:
    explicit BaseAction();
    ~BaseAction();
    virtual void begin() = 0;
    virtual QString getStringRight();
    virtual QString getString();
    void init();
    virtual bool isRight();
    virtual QString readString();
    Expression *expression = nullptr;
signals:

};

#endif // BASEACTION_H
