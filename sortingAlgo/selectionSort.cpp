//selection sort => pick the smallest(from unsorted) & put in the beginning.
//turns (iterations) => n-1 (outer loop, as no loop necessary for last term)
//time complexity => O(n^2) => but O(n*logn) is much better
//[5,4,1,3,2] -> [1,4,5,3,2] -> [1,2,5,3,4] -> [1,2,3,5,4] -> [1,2,3,4,5]

#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
        // int temp = arr[i];
        // arr[i] = arr[minIdx];
        // arr[minIdx] = temp;
    }
    printArr(arr, n);
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    
    selectionSort(arr, 5);
    return 0;
}