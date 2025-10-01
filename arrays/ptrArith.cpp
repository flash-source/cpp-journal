#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for (int i=0; i<n; i++) {
        cout << *(arr+i) << endl;  //*arr
    }                              // arr += 1
}

int main() {
    int a = 5;
    int *aptr = &a;
    cout << aptr << endl;//...4
    aptr++; //pointer points to next integer (4 byte/addresses ahead)
    cout << aptr << endl;
    cout << aptr + 3 << endl;//...(3*4 = 12 bytes)

    char b = 's';
    char *bptr = &b;
    cout << static_cast<void*>(bptr) << endl;//...4
    bptr--; //pointer points to previous character (1 bute/addresses before)
    cout << static_cast<void*>(bptr) << endl;//...8

    //mainly used in arrays (to access diffreent memory locations)
    int arr[] = {2, 4, 6, 8, 10};
    int n= sizeof(arr)/sizeof(int);
    printArr(arr, n);

    //ptr1 + ptr2 -> invalid operation
    // ptr1 - ptr2 -> both should be of same type -> used to determine the spaces b/w two elements in array
    int array[20] = {1, 2, 3, 4, 5};
    int *ptr1 = array;
    int *ptr2 = ptr1 + 3;

    cout << *ptr1 << endl; //1
    cout << *ptr2 << endl; //4
    cout << ptr1 << endl; 
    cout << ptr2 << endl; 
    cout << ptr2-ptr1 << endl; //3
    //comparison operators => mainly used if you want to check if the pointer of array is pointing to same memory location  
    cout << (ptr1 == arr) << endl; //1
    cout << (ptr1 == ptr2) << endl; //0
    return 0;
}