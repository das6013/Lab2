#ifndef OBSERVE_H
#define OBSERVE_H


class Observe//interface observe
{
public:
    virtual void Update(bool existence, long size) = 0;//update data file bool exstine -check file,and size - size file
};

class FileObserver: Observe//concrete realize observe
{
private:
    long lastSize = -1;
public:
    void Update(bool existence, long size);//update data file bool exstine -check file,and size - size file
};

#endif // OBSERVE_H
