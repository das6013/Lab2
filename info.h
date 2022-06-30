#ifndef INFO_H
#define INFO_H
#include <QString>
#include <sys/stat.h>
class Info
{
public:
    QString name;//name file
    float size;//size file 
    bool existence;//check existence
    Info(QString fileName);//consructor to QSTRIng
};

#endif // INFO_H
