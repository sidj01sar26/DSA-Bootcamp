// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxTurbulenceSize(vector<int> &arr)
    {
        // Initialize variables to keep track of the current turbulence size,
        // number of consecutive smaller elements, and number of consecutive larger elements
        int ans = 1, smaller = 1, larger = 1;

        // Iterate through the array
        for (int i = 0; i < arr.size() - 1; i++)
        {
            // Check if the current element is smaller than the next element
            smaller = arr[i] < arr[i + 1] ? smaller + 1 : 1;
            // Check if the current element is larger than the next element
            larger = arr[i] > arr[i + 1] ? larger + 1 : 1;
            // Update the maximum turbulence size encountered so far
            ans = max(ans, max(smaller, larger));
            // Swap smaller and larger for the next iteration
            swap(smaller, larger);
        }

        // Return the maximum turbulence size
        return ans;
    }
};