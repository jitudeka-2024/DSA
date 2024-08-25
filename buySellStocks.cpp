#include<iostream>
using namespace std;

void maxProfit(int *prices, int n) {
    int bestBuy[100000];
    bestBuy[0] = INT32_MAX;
    for(int i = 1; i<n; i++) {
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
        
    }
    int maxProfit = 0;
    for(int i = 0; i<n; i++) {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "max Profit = " << maxProfit;
}


int main() {
    /*
    
    Q: prices = [7, 1, 5, 3, 6, 4]
    Return maximum profit

    
    */

   int prices[] = {7, 6, 5, 4, 3, 2};
   int n = sizeof(prices) / sizeof(int);

   maxProfit(prices, n);

   //Time Complexity : O(n+n) = O(2n) = O(n)
 

    return 0;
}