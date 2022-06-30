#include "info.h"
#include <iostream>
using namespace std;
Info::Info(QString fileName)// consructor to QString
{
    name = fileName;//name file
    struct stat buff;//struct get data file
    FILE *file;//file
    file=fopen(fileName.toStdString().c_str(),"r");
   if (file)//check exstinece
    {
       existence=true;
       stat(fileName.toStdString().c_str(), &buff);//get data
       size = buff.st_size;//size file
   }
   else
   {
       existence=false;
       size=0;
    }
}
