//using extra space (creating new copy array)
//time complexity => O(n)
//space complexity => O(n)
#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main() {
    int arr[5] = {4, 6, 3, 5, 1};
    int n = sizeof(arr)/sizeof(int);

    int copyArr[n];
    for (int i=0; i<n; i++) {
        int j = n-i-1;
        copyArr[i] = arr[j];
    }

    for (int i=0; i<n; i++) {
        arr[i] = copyArr[i];
    }

    printArr(arr, n);
    return 0;
}