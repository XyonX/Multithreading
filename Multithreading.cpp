// Multithreading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
void ARandomFunction ()
{
    printf("A Random hlw world !! \n");
}
int main()
{
    // creating a thread
    std::thread thread1 (ARandomFunction);
    
    // forcing the main thread to execute this thread
    thread1.join();

    printf(" Main hlw world  \n");
    
    
}

