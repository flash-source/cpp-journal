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

class Mammal : public Animal {
public:
    string bloodType;
    Mammal() {
        bloodType = "warm";
    }
};

class Dog : public Mammal {
public: 
    void tailWag() {
        cout << "a dog can wags its tail\n";
    }
};

int main() {
    Dog d1;
    
    d1.eat();
    d1.breathe(); 
    d1.tailWag();
    cout << d1.bloodType << endl;
    return 0;
}