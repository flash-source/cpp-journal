//special method invoked automatically at time of object creation. 
//Used for initialisation of properties.
//same name as class
//doesn't have return type
//only called once(automatically), at object creation
//allocate memory to an object
//memory allocation happens when constructor is called

#include <iostream>
using namespace std;

class Car {
    string name;
    string color;

public:
//when you make ur own constructor -> defined in public as it is called when an object is made
//initialising the values
    Car(string nameVal, string colorVal) {
        cout << "constructor is called! object created..\n";
        name = nameVal;
        color = colorVal;
    }
    void start() {
        cout << "car started...\n";
    }
    void stop() {
        cout << "car stoped...\n";
    }

    //getter
    string getName() {
        return name;
    }
    string getColor() {
        return color;
    }
};

int main() {
    Car c1("BMW M3", "Black"); //initial values
    cout << c1.getName() << endl;
    cout << c1.getColor() << endl;
    return 0;
}