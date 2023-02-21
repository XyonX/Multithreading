#include "CThread.h"
#include <thread>



void CThread::join()
{
    ID.join();
}

void CThread::detach()
{
    ID.detach();
}
