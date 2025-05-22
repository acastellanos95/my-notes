#include <thread>
#include <iostream>

int main (int argc, char *argv[]) {
    int state = 0;
    std::thread t([&state](){
        for (size_t i = 0; i < 10000; i++) {
            std::cout << static_cast<int>(state) << '\n';
            ++state;
        }
    });
    t.detach();
    for (size_t i = 0; i < 5000; i++) {
        state++;
    }
    return 0;
}
