#include <iostream>
#include "observeobject.h"
#include "observe.h"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
   FileMonitor tets("C:/Users/andru/Documents/Lab2/filename.tqxt");
   FileObserver observer;
   tets.Attach(&observer);
   while (true)
   {
       tets.CheckFile();
       this_thread::sleep_for(chrono::milliseconds(1000));
    }
}
