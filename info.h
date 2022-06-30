#ifndef INFO_H
#define INFO_H
#include <QString>
#include <sys/stat.h>
class Info
{
public:
    QString name;// name file
    long size;// size file
    bool existence;// chech exestence file
    Info(QString fileName);//constructor to Qstring
};

#endif // INFO_H
