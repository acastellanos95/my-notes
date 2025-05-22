#include <thread>
#include <iostream>

void do_something(int& i)
{
    ++i;
}

void do_something_in_current_thread()
{
    throw 1;
}

void f()
{
    int some_local_state=0;
    std::thread t([&some_local_state](){
                for(unsigned j=0;j<1000000;++j)
                {
                    do_something(some_local_state);
                }
                std::cout << "finished!\n";
            });
    try
    {
        do_something_in_current_thread();
    }
    catch(...)
    {
        t.join();
        throw;
    }
    t.join();
}

int main()
{
    f();
}
