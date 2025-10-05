//when properties and member function of base class are passed on to the derived class.
//for code reuseability

#include <iostream>
using namespace std;

class Animal {
public:
    string color;
    void breathe() {
        cout << "can breathe\n";
    }
    void eat() {
        cout << "can eat\n";
    }
};

class Fish : public Animal {
public: 
    int fins;
    void swim() {
        cout << "can swim\n";
    }
};

int main() {
    Fish f1;
    f1.fins = 3;
    cout << f1.fins << endl;
    f1.swim(); 
    f1.eat();
    f1.breathe(); 
    return 0;
}