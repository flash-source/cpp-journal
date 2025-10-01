//for sorted array 
//better time complexity
//tc -> for x iteration -> n/2^x-1 =1 -> logn -> O(logn)

#include <iostream>
using namespace std;

//time complexity => O(n)
int binarySearch(int *arr, int n, int key) {
    int start = 0, end = n-1;
    
    while(start <= end) {
        int mid = (start+end)/2;
        if(arr[mid] == key) {
            return mid; //key found
        } else if (arr[mid] < key) {
            start = mid+1; //2nd half
        } else {
            end = mid-1; //1st half
        } 
    } 
    return -1; //key not found
}

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);

    cout << binarySearch(arr, n, 1) << endl;
    cout << binarySearch(arr, n, 2) << endl;
    cout << binarySearch(arr, n, 3) << endl;
    cout << binarySearch(arr, n, 4) << endl;
    cout << binarySearch(arr, n, 5) << endl;
    cout << binarySearch(arr, n, 7) << endl;
    
    return 0;
}