//run time polymorphism => function overriding

//parent and child both contain the same function with different implementation
//the parent class function is said to be overridden.

#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "child class" << endl;
    }
};

int main() {
    Child c1;
    c1.show();
    return 0;
}