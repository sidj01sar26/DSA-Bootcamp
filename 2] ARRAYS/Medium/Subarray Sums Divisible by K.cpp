// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size();          
        // Get the size of the input array
        unordered_map<int, int> sums; 
        // Create a hashmap to store the cumulative sums and their frequencies
        sums[0] = 1;                  
        // Initialize the hashmap with an initial cumulative sum of 0

        int cnt = 0;     // Initialize a counter for the number of subarrays divisible by k
        int currSum = 0; // Initialize the current cumulative sum

        for (int i = 0; i < n; i++)
        { 
            // Iterate through the input array
            // Update the cumulative sum by adding the current element and ensuring it's non-negative and within the range [0, k)
            currSum = (currSum + nums[i] % k + k) % k;

            // Increment the counter by the frequency of the current cumulative sum in the hashmap
            cnt += sums[currSum];

            // Increment the frequency of the current cumulative sum in the hashmap
            sums[currSum]++;
        }

        return cnt; // Return the total count of subarrays divisible by k
    }
};