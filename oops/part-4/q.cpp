#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "constructor parent..\n";
    }
    ~Parent() {
        cout << "destructor parent..\n";
    }
};

class Child : public Parent {
public:    
    Child() {
        cout << "constructor child..\n";
    }
    ~Child() {
        cout << "destructor child..\n";
    }
};

int main() {
    Child c1; //constructor parent..
    return 0; //constructor child..
}             //destructor child..
              //destructor parent..