#include <iostream>
using namespace std;

//basic call => with or without any argument

//call by value => make copy of actual argument 
void changeVal(int num) {
    num = 20;
    cout << num << endl;
}

//call by pointer
void changePtr(int *ptr) {
    *ptr = 20;
    cout << *ptr << endl;
}

//call by ref(reference variable) => change the actual value by going at its address
void changeRef(int &b) {
    //a and b refer to same memory location
    // &b = a
    b = 20;
    cout << b << endl;
}

int main() {
    int a = 10;
    changeVal(a);  //20
    cout << a << endl;  //10
    changePtr(&a);  //20
    cout << a << endl; //20
    changeRef(a);  //20
    cout << a << endl; //20

    return 0;
}