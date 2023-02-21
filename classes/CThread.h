#include <thread>
#include <string>

class CThread
{
    
public:
    
    template <typename Function, typename... Args>
  CThread(Function&& func, Args&&... args) {
        ID = std::thread([=]() { func(args...); });
    }
    void join();
    void detach ();

private:
    std::thread ID;

    
};


