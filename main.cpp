#include <iostream>
#include "observeobject.h"
#include "observe.h"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
   Info tes("C:/Users/andru/Documents/Lab2/filename.txt");
   FileObserver observer;
   observer.Update(tes.existence,tes.size);
}
