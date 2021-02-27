#ifndef ENGINE_H
#define ENGINE_H


#include <QObject>
#include <QDateTime>

class Engine : public QObject
{
    Q_OBJECT
public:
    explicit Engine(QObject *object = nullptr);
    QDateTime saveTime;
    quint64 delyaTime;

public slots:
    void begin();
};

#endif // ENGINE_H
