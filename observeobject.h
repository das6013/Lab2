#ifndef OBSERVEOBJECT_H
#define OBSERVEOBJECT_H

#include "observe.h"
#include <vector>
#include <info.h>
using namespace  std;
class ObserveObject
{
private:
    vector<FileObserver*> subscribers;//list sub
public:
    void Attach(FileObserver *observer);//add sub
    void Detach(FileObserver *observer);//delete sub
    void Notify(bool existence, long size);//update date sub and iter
};
class FileMonitor: public ObserveObject
{
private:
    Info prevFileState;
public:
    FileMonitor(QString _name);//constructor to FileMonitor
    void CheckFile();//Chek change file
    void Change(bool existence, long size);// change data 
};
#endif // OBSERVEOBJECT_H
