#ifndef HAPROXY
#define HAPROXY

#include <QObject>
#include <QDebug>
namespace Monero {
    class Haproxy; // forward declaration
}
class Haproxy : public QObject
{
    Q_OBJECT
public:
    //static Haproxy * haproxy();
    Q_INVOKABLE void haproxy(const QString &host, const QString &ip, const QString &port);
    Q_INVOKABLE void haproxyCert(const QString &host, const QString &certificate);
    Q_INVOKABLE void killHAproxy();

    //void haproxy();
private:
    //explicit Haproxy(QObject *parent = 0);
};

#endif // HAPROXY

