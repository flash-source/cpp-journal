//this is a special pointer in C++ that points to the current object.
//this->name == *(this).name == c1.name

//constructor overloading => when multiple with same name as of class are created with different parameter
#include <iostream>
using namespace std;

class Car {
    string name;
    string color;

public:
    //non-parameterized
    Car() {
        cout << "constructor without params is called!\n";
    }
    //parameterized
    Car(string name, string color) {
        cout << "constructor with params is called!\n";
        //object id = parameter
        this->name = name;
        this->color = color;
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
    Car c0; //non-parameter
    Car c1("BMW M3", "Black"); //parameter
    cout << c1.getName() << endl;
    cout << c1.getColor() << endl;
    return 0;
}