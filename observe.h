#ifndef OBSERVE_H
#define OBSERVE_H


class Observe//interface observe
{
public:
    virtual void Update(bool existence, long size) = 0;//exstiine -check existence size-size
};

class FileObserver: Observe //concret class realize observe
{
private:
    long lastSize = -1;//last size element
public:
    void Update(bool existence, long size);//check data file and update it
};

#endif // OBSERVE_H
