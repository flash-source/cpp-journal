#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {4, 6, 3, 5, 1};
    int n = sizeof(arr)/sizeof(int);
    printArr(arr, n);
    return 0;
}