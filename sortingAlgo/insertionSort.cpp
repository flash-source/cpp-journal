//insertion sort => pick an element from unsorted part & place it correctly in sorted part.
//turns (iterations) => n-1 (outer loop, 1 to n for unsorted part)
//time complexity => O(n^2) => but O(n*logn) is much better
//[5,4,1,3,2] -> [4,5,1,3,2] -> [1,4,5,3,2] -> [1,3,4,5,2] -> [1,2,3,4,5]

#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr) {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    printArr(arr, n);
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    
    insertionSort(arr, 5);
    return 0;
}