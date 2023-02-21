#include <iostream>
#define watch(x) std::cout << (#x) << " is " << (x) << std::endl;

int main() {
    std::string harry_potter = "Harry Potter";
    watch(harry_potter)
}