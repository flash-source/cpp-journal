//* array pointers -> pointer of array -> acts like constant pointer
#include <iostream>
using namespace std;

//arrays are passed by reference
void array(int arr[]) {   //int arr[] = int *arr
    arr[0] = 100;
}  

int main() {
    int arr[] = {5, 3, 7, 4, 8};
    cout << arr << endl;  //address of 0th index
    cout << *arr << endl;  //arr[0]
    cout << *(arr+1) << endl;  //arr[1]
    cout << *(arr+2) << endl;  //arr[2]
    array(arr);
    cout << arr[0] << endl;  //100
    return 0;
}