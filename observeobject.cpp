#include "observeobject.h"

#include <sys/stat.h>

void ObserveObject::Attach(FileObserver *observer)
{
    subscribers.push_back(observer);//add subcsribres in observe
}

void ObserveObject::Detach(FileObserver *observer)
{
    subscribers.erase(std::remove(subscribers.begin(), subscribers.end(), observer), subscribers.end());//delete subcsribres in observe
}

void ObserveObject::Notify(bool existence, long size)//update data 
{
    for(std::vector<FileObserver*>::const_iterator iter = subscribers.begin(); iter != subscribers.end(); iter++)//iter to sub 
    {
        if (*iter != 0)
        {
            (*iter)->Update(existence, size);//update data
        }
    }
}

FileMonitor::FileMonitor(QString name) : prevFileState(name) { }

void FileMonitor::CheckFile()//chage file data
{
    Info newFileState(prevFileState.name);
    Change(newFileState.existence, newFileState.size);
    prevFileState = newFileState;
}

void FileMonitor::Change(bool existence, long size)//change data
{
    Notify(existence, size);
}
