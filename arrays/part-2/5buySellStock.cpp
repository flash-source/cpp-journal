//buy and sell stocks, for maximum profit
//TC => O(n)
//prices = 7 1 5 3 4 6
//bestBuy = infinity 7 1 1 1 1
//profit = -infinity -6 4 2 3 5 
//maxProfit = 5

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

void maxProfit(int *prices, int n) {  
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i=1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }
    int maxProfit = 0;
    for(int i=0; i<n; i++) {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "max Profit = " << maxProfit << endl;
}

int main() {
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    maxProfit(prices, n);
    return 0;
}

