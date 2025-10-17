//kadane's algorithm (DP)
//TC => O(n)

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

void maxSubArrSum(int *arr, int n) {  
    int maxSum = INT_MIN; // -infinity (pre-defined macros)
    int currSum = 0;

    for(int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }
    cout << "\nMaximum Subarray Sum = " << maxSum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArrSum(arr, n);
    return 0;
}

