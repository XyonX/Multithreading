// Multithreading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>


void ARandomFunction ()
{
    printf("A Random hlw world from a random function !! : %d \n",std::this_thread::get_id());
}

void TestFunction ()
{
    printf("called from test function \n");
}
void ThreadFun_A ()
{
    
    printf("called from thread A \n");
    std::thread thread_C(TestFunction);
    thread_C.join();
}
void ThreadFun_B ()
{
    printf("called from thread B \n");
    
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
   // std::thread thread1 (ARandomFunction);

    ARandomClass ARandomObject ;

    // creating a new thread    #2
    //std::thread thread2 (ARandomObject);

    //here we are going to create more thread i am stop counting    #3
    /*std::thread thread3 ([]
    {
        printf( "A Random hlw world from inside the thread : %d\n",std::this_thread::get_id());
        
    });*/

    std:std::thread thread_A(ThreadFun_A);
    std::thread thread_B (ThreadFun_B);
    

    thread_A.join();
    thread_B.join();

    //main thread
    //printf("A Random hlw world from  main : %d \n" ,std::this_thread::get_id());
    
    
}

