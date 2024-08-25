#include<iostream>
using namespace std;

void maxSubarraySum3(int *arr, int n) {
    int maxSum = INT8_MIN;
    int currSum = 0;

    for(int i = 0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    cout  << "maximun subarray sum = " << maxSum << endl;
    
}

int main() {

    // Kadane`s Algorithm(DP)

     
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum3(arr, n);

    int arr2[] = {-1, -2, -3, -4};
    int n2 =  sizeof(arr2) / sizeof(int);

    maxSubarraySum3(arr2, n2);

    







    return 0;
}