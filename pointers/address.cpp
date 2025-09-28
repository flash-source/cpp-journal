#include <iostream>
using namespace std;

//pointers -> variables that stores the address of another variable

int main( ){ 
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;

    cout<< ptr << endl; //ptr = &a
    cout<< pptr << endl;  //pptr = &ptr
    //dereference operator -> tells the value stored in address
    cout<< *ptr << endl; //*ptr = *(&a)

    *ptr = 20;
    cout << *ptr << endl;

    //NULL pointer => it doesn't point to any location
    int *pointer = NULL;
    cout << pointer << endl; //0
    //when deferenced => show segmentation fault (further code will not execute)
    cout << *pointer << endl; 
    return 0;
}