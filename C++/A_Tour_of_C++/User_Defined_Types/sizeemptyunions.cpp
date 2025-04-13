#include <iostream>

union EmptyUnion {
    
};

int main (int argc, char *argv[]) {
    EmptyUnion emp{};
    std::cout << sizeof emp << '\n';
    return 0;
}
