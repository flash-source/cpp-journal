//TC => O(n^2)

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

void maxSubArrSum(int *arr, int n) {  
    int maxSum = INT_MIN; // -infinity (pre-defined macros)
    
    for (int start = 0; start < n; start++) {  //start = 2
        for (int end = start; end < n; end++) {  //end = 2, 3, 4, 5
            int currSum = 0;
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
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
