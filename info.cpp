#include "info.h"
#include <iostream>
using namespace std;
Info::Info(QString fileName)
{
    name = fileName;
    struct stat buff;
    FILE *file;
    file=fopen(fileName.toStdString().c_str(),"r");
   if (file)
    {
       existence=true;
       stat(fileName.toStdString().c_str(), &buff);
       size = buff.st_size;
   }
   else
   {
       existence=false;
       size=0;

    }
}
