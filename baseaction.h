#ifndef BASEACTION_H
#define BASEACTION_H

#include <QObject>
#include <global.h>
#include <QList>
#include <windows.h>

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
//        wordResponse = QString::fromStdString(response).toLower().simplified();
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
