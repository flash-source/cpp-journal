//virtual function
//member function that you expect to be redefined in derived classes.
//dynamic in nature
//defined by keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class
//called during run time


#include <iostream>
using namespace std;

class Parent {
public:
    virtual void hello() {
        cout << "Parent hello" << endl;
    }
};

class Child : public Parent {
public:
    void hello() {
        cout << "child hello" << endl;
    }
};

int main() {
    Child c1;
    Parent *ptr;
    ptr = &c1; //run time binding
    ptr->hello(); //virtual function -> child function get called
    return 0;
}