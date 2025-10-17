//max subarray sum
//max subarray sum = array sum(if all elements are +ve)
//TC => O(n^3)

//brute force approach

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

void maxSubArrSum(int *arr, int n) {  
    int maxSum = INT_MIN; // -infinity (pre-defined macros)
    
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int currSum = 0;
            
            for (int i = start; i <= end; i++) {
                currSum += arr[i];
            }
            
            if (currSum > maxSum) {
                maxSum = currSum;
            }
            
            cout << currSum << ", "; // print each subarray sum
            //maxSum = max(maxSum, currSum);
            //max(a, max(b,c)); for max. of 3 values
        }
        cout << endl;
    }
    
    cout << "\nMaximum Subarray Sum = " << maxSum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArrSum(arr, n);
    return 0;
}
