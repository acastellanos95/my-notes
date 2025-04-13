#include <iostream>

struct example {
    int hi;
};

int main (int argc, char *argv[]) {
    example ex{1};
    std::cout << "hello world\n";
    return 0;
}
