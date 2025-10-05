//abtraction 
//hiding all unnecessary details & showing only the important parts
//through access specifiers (done)
//Abstract classes & pure virtual functions
//Abstract classes => 
//give blueprint for child class, have atleast one pure virtual function
//used to provide a base class from which other classes can be derived
//they cannot be instantiated(don't make their objects/instances) and are meant to be inherited
//typically used to define an interface(blueprint) for derived classes.
//pure virtual functions => 
//don't have any clear definitation
//it is a virtual function with no definition/logic.
//it is declared by assigning 0 at the time of declaration.

#include <iostream>
using namespace std;

//abstract class
class Shape {
public:
    virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "draw circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "draw Square" << endl;
    }
};

int main() {
    // Shape s;    //error -> abstract class
    // s.draw();
    Circle c1;
    c1.draw();
    Square s1;
    s1.draw();
    
    return 0;
}