#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n) {
    // Initialize the variables
    long long currentSum = 0;
    long long maxSum = 0;  // Since the empty subarray sum is 0

    // Traverse the array
    for (int i = 0; i < n; ++i) {
        // Update the current sum by adding the current element
        currentSum += arr[i];

        // If the current sum is negative, reset it to 0
        if (currentSum < 0)     currentSum = 0;

        // Update max_sum with the maximum value between current max_sum and current_sum
        maxSum = max(maxSum, currentSum);
    }

    // return max_sum;
    return maxSum;

}
