//traping rainwater
//TC => O(n)
//area of trapped water b/w the bars = height*width(1) = height
//must create a valley of atleast 3 bars (small b/w and larger once at ends)
//area of water trapped = (min(left largest - right largest) - currBar) * width
//extra arrays created for solving a problem => auxiliary/helper array

//arr = 4 2 0 6 3 2 5
//leftMax = -infinity 4 4 4 6 6 6
//rightMax = 6 6 6 5 5 5 -infinity
//minValue = -infinity 4 4 4 5 5 -infinity
//currWater = -in 2 4 -2 2 3 -in
//replace -ve values by 0 and add all

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

int trapWater(int *height, int n) {  
    int leftMax[20000];
    leftMax[0] = height[0];  //INT_MIN -> not using (-infinity -4 => =ve ) because of bit manipulation
    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i-1], height[i-1]);
    }

    int rightMax[20000];
    rightMax[n-1] = height[n-1];  //INT_MIN
    for(int i=n-2; i>=0; i--) {
        rightMax[i] = max(rightMax[i+1], height[i+1]);
    }

    int trappedWater = 0;
    for(int i=0; i<n; i++) {
        int minValue = min(leftMax[i], rightMax[i]);
        int currWater = minValue - height[i];
        if (currWater > 0) {
            trappedWater += currWater; 
        }
    }
    cout << "total trapped water = " << trappedWater << endl;
    return trappedWater;
}

int main() {
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    trapWater(height, n);
    return 0;
}

