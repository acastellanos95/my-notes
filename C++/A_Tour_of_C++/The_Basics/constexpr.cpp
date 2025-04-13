#include <vector>
// Can an object be constant expression if the constructor doesn't say anything about this.
constexpr std::vector<int> v = {1,2,3,4}; // I think this one can be because its arguments are literals. This is trickier, classes with non trivial destructors can't be literal type.


int main (int argc, char *argv[]) {
    
    return 0;
}
