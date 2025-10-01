//count sort => use a frequency count of elements from min to max
//used when range b/w the max and min number is small and numbers are +ve.
//turns (iterations) => n-1 (outer loop, 1 to n for unsorted part)
//time complexity => O(n + range) or somtimes, O(n)
//[5,4,1,3,2] -> [4,5,1,3,2] -> [1,4,5,3,2] -> [1,3,4,5,2] -> [1,2,3,4,5]

#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countSort(int arr[], int n) {
    int freq[100000] = {0}; //range
    int minVal = INT_MAX, maxVal = INT_MIN;
    
    //1st step - O(n)
    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    //2nd step -O(range) = max - min
    for(int i=minVal, j=0; i<=maxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArr(arr, n);
}

int main() {
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    //in-built sort function
    //sort(start, end); //in ascending order
    //sort(arr, arr+8);
    //sort(arr+2, arr+5); //can also be used to sort some part of array
    //sort(start, end, greater<int>()); //in descending order
    countSort(arr, 8);
    return 0;
}