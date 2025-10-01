//linear collection of same type of elements that are stored in contiguous memory spaces.
//if size of array is defined and you don't initialize an array, it stores garbage value
//but if you initialize some element, then other indexes will store 0 as value
//memory is statically allocated at compile time

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i]; 
    }

    for(int i=0; i<n; i++) {
        cout << arr[i] << " "; 
    }

    cout << endl;
    return 0;
}