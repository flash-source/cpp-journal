//bubble sort => larger elements comes to end by swapping with adjacents.
//turns (iterations) => n-1 (outer loop, as no loop necessary for last term), n-i-1 (inner loop)
//time complexity => O(n^2)
//[5,4,1,3,2] -> [4,1,3,2,5] -> [1,3,2,4,5] -> [1,2,3,4,5]

#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

//isSwap for optimization => if array is already sorted -> tc = O(1, 1)
void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) { //sort in ascending order, if (<) then descending
                //swap(arr[j], arr[j+1]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwap = true;
            }
        }
        if(!isSwap) {
            //array is already sorted 
            break;
        }
    }
    printArr(arr, n);
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    
    bubbleSort(arr, 5);
    return 0;
}