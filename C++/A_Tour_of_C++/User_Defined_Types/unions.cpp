#include <iostream>
#include <typeinfo>

union MyUnion {
    unsigned int i;
    unsigned short us;
};

int main (int argc, char *argv[]) {
    MyUnion un{0xFFFFFFFF};
    std::cout << un.us << '\n';
    return 0;
}
