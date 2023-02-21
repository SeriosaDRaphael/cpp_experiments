#include <iostream>

class Main {
public: 
    void set_grade(int g) { this->grade = g; }
    void get_grade() { std::cout << this->grade << "\n"; }
protected:
    Main() {
        ;
    }
    int grade;
};

class Derived : public Main  {
public:
    ;
};

int main() {
    Derived d;
    d.set_grade(94);
    d.get_grade();
};