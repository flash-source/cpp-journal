//deallocate memory from an object
//envoke automatically
//custom destructor -> when memory is dynamiclly allocated -> need to deallocate explicitly

#include <iostream>
using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;
    
    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; //dynamic allocation
        *mileage = 12;
    }  
    
    Car(Car &original) {
        cout << "copying...\n" ;
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

    //destructor
    ~Car() {
        cout << "deleting object..\n";
        if(mileage != NULL) {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main() {
    Car c1("BMW M5", "Black");
    cout << c1.name << endl; //BMW M5
    cout << c1.color << endl; //Black
    cout << *c1.mileage << endl; //12
    
    return 0;
}