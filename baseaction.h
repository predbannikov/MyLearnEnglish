#ifndef BASEACTION_H
#define BASEACTION_H

#include <QObject>
#include <global.h>
#include <QList>
#ifdef   _WIN32
#include "Windows.h"
#elif   __linux__
#include "colors.h"
#endif


struct Expression {
    QString wordResponse;
    QString wordRight;
    virtual bool isRight() {
        return wordResponse.simplified() == wordRight.simplified();
    }
    virtual void set(QString aRightStr) {
        std::wstring response;
        std::wcin >> response;
        wordResponse = QString::fromStdWString(response).toLower().simplified();
        wordRight = aRightStr.simplified();
    }
    virtual void setLine(QString aRightStr) {
        std::wstring response;
        std::getline(std::wcin, response);
        wordResponse = QString::fromStdWString(response).toLower().simplified();
//        wordResponse.remove(' ');
//        wordResponse.remove('-');

//        wordResponse = QString::fromStdString(response).toLower().simplified();
        wordRight = aRightStr.simplified();
//        wordRight.remove(' ');
//        wordRight.remove('-');

    }
};

class BaseAction
{
public:
    explicit BaseAction();
    virtual ~BaseAction();
    virtual void begin(int number = -1) = 0;
    virtual QString getStringRight();
    virtual QString getString();
    void init();
    virtual bool isRight();
    virtual QString readString();
    Expression *expression = nullptr;
signals:

};

#endif // BASEACTION_H
