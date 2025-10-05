//polymorphism => ability of object to take on different forms or behave in different ways depending on the context in which they are used.
//example => constructor overloading
//2 types => compile time and run time
//compile time => function overloading & operator overloading
//run time => function overriding, virtual function

//function overloading

#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "int: " << x << endl;
    }
    void show(string str) {
        cout << "string: " << str << endl;
    }
};

int main() {
    Print p1;
    p1.show(25);
    p1.show("hello");
    return 0;
}