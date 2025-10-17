//subarray => continous part of an array
//subsequence => non-continous part (follow order)

//for n (no. of elements) -> 1+2+...+n (subarrays) = n*(n+1)/2
//TC => O(n^3) -> 3 loops, runs 3 times

#include <iostream>
using namespace std;

void printIdx(int *arr, int n) {  
    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            cout << "(" << start << "," << end << ")";
        }
        cout << endl; 
    }
}

void printSubArr(int *arr, int n) {  
    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            for(int i=start; i<=end; i++) {
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl; 
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    printIdx(arr, n);
    printSubArr(arr, n);
    return 0;
}