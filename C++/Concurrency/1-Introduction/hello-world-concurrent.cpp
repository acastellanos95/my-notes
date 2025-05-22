#include <iostream>
#include <thread>

int main (int argc, char *argv[]) {
    std::thread t([](){
            std::cout << "Hello Concurrent World\n";
            });
    t.join();
    return 0;
}
