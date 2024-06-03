// Leetcode

#include <bits/stdc++.h>
using namespace std;

#include <vector>
using namespace std;

class Solution
{
public:
    int sumOddLengthSubarrays(const vector<int> &arr)
    {
        int n = arr.size(); // Get the size of the input array
        int sum = 0;        // Initialize the sum of subarrays to 0

        for (int i = 0; i < n; i++)
        { 
            // Iterate through each element of the array
            // Calculate the number of subarrays in which arr[i] appears an odd number of times
            // (n - i) is the number of subarrays that start before or at index i
            // (i + 1) is the number of subarrays that end after or at index i
            // ((n - i) * (i + 1) + 1) / 2 is the number of odd-length subarrays containing arr[i]
            sum += (((n - i) * (i + 1) + 1) / 2) * arr[i];
        }

        return sum; // Return the total sum of all odd-length subarrays
    }
};