#include "info.h"

Info::Info(QString fileName)// constructor 
{
    name = fileName;// file name
    struct stat stat_buf;// stat_buf include dae file
    existence = stat(fileName.toStdString().c_str(), &stat_buf) == 0;//check existence
    size = stat_buf.st_size;//get size
}
