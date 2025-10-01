#include <iostream>
using namespace std;

//time complexity => O(n)
int linearSearch(int *arr, int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {4, 6, 3, 5, 1};
    int n = sizeof(arr)/sizeof(int);

    cout << linearSearch(arr, n, 5) << endl;
    return 0;
}