#include "observe.h"
#include<iostream>
using namespace  std;
void FileObserver::Update(bool existence, long size)//update data
{
    if (lastSize == -1) lastSize = size; //set size
    if (existence)//check existence
    {
        if (lastSize != size)
        {
            cout << "File is existung, file has been changed, size: " << size << endl;//out
            lastSize = size;
        }
        else
        {
            cout << "File is existing, size: " << lastSize <<endl;//out
        }
    }
    else
    {
        cout << "File is not existing" << endl;//Error
    }
}
