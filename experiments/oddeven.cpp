#include <iostream>

int main() {
    int num = 10;
    
    num & 1 ? std::cout << "Odd\n" : std::cout << "Even\n"; 
}