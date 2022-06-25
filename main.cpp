#include <iostream>
#include "observeobject.h"
#include "observe.h"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
   Info tes("C:/Users/andru/Documents/Lab2/filename.qwetxt");
   cout<<tes.existence<<endl;
   cout<<tes.name.toStdString()<<endl;
   cout<<tes.size<<endl;
}
