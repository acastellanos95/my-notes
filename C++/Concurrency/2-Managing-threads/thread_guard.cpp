#include <thread>
#include <iostream>
#include <utility>

class thread_guard
{
    std::thread t;
    public:
    explicit thread_guard(std::thread &&t) : t(std::forward<std::thread>(t)) {}
    ~thread_guard() {
        std::cout << static_cast<int>(t.joinable()) << '\n';
        if (t.joinable()) {
            t.join();
        }
    }
    thread_guard(thread_guard const&)=delete;
    thread_guard& operator=(thread_guard const&)=delete;
};

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
    thread_guard g{std::thread{[&some_local_state](){
                for(unsigned j=0;j<1000000;++j)
                {
                    do_something(some_local_state);
                }
                std::cout << "finished!\n";
            }}};
    do_something_in_current_thread();
}

int main()
{
    f();
}
