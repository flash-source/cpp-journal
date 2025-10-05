#include <iostream>
using namespace std;

class Animal {
public:
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

class Mammal : public Animal {
public:
    string bloodType;
    Mammal() {
        bloodType = "warm";
    }
    void walk() {
        cout << "can walk\n";
    }
};

class Bird : public Animal {
public: 
    void fly() {
        cout << "can fly\n";
    }
};

int main() {
    Bird b1;
    Fish f1;
    Mammal m1;
    b1.breathe();
    b1.eat();
    b1.fly();
    f1.breathe();
    f1.eat();
    f1.swim();
    m1.breathe();
    m1.eat();
    m1.walk();
    return 0;
}