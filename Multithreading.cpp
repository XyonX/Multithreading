// Multithreading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>


void ARandomFunction ()
{
    printf("A Random hlw world from a random function !! : %d \n",std::this_thread::get_id());
}

class ARandomClass
{
public:
    void operator ()()
    {

        printf("A Random hlw world from a random class : %d \n",std::this_thread::get_id());
    }
    
};

int main()
{
    // creating a new thread    #1
    std::thread thread1 (ARandomFunction);

    ARandomClass ARandomObject ;

    // creating a new thread    #2
    std::thread thread2 (ARandomObject);

    //here we are going to create more thread i am stop counting
    std::thread thread3 ([]
    {
        printf( "A Random hlw world from inside the thread : %d\n",std::this_thread::get_id());
        
    });
    
    // forcing the main thread to execute this thread
    thread1.join();
    thread2.join();
    thread3.join();

    printf("A Random hlw world from  main  \n");
    
    
}

