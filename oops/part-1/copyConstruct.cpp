//special constructor(default) used to copy properties from one object to another.
//shallow copy -> copies references to original array(pointers to dynamic allocated memory), but array remains same.
//deep copy -> creates brand new copy of the array.
#include <iostream>
using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;
    //default -> creates shallow copy 
    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; //dynamic allocation
        *mileage = 12;
    }   
    
    //custom copy constructor
    //used to create deep copy
    //param -> we take reference of object(original) which is object of same class(Car)
    Car(Car &original) {
        cout << "copying...\n" ;
        name = original.name;
        color = original.color;
        // mileage = original.mileage; //shallow
        //deep copy
        mileage = new int;
        *mileage = *original.mileage;
    }
};

int main() {
    Car c1("BMW M5", "Black");
    //copy constructor
    Car c2(c1); //custom constructor will be called
    cout << c2.name << endl; //BMW M5
    cout << c2.color << endl; //Black
    cout << *c2.mileage << endl; //12
    //shallow copy -> pointer points to same address as c1
    //deep copy -> creates copy of the pointer or array in the heap.
    *c2.mileage = 10;
    cout << *c1.mileage << endl; //10X now, 12
    return 0;
}