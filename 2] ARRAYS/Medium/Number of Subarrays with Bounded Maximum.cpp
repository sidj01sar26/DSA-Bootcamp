// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSubarrayBoundedMax(vector<int> &A, int L, int R)
    {
        int j = 0, ans = 0, count = 0; // Initialize variables: j is the start of the current subarray, ans is the total count of valid subarrays, and count is the count of valid subarrays ending at the current index.

        for (int i = 0; i < A.size(); i++)
        { // Loop through the array.
            if (A[i] >= L && A[i] <= R)
            {                      // If the current element is within the range.
                ans += i - j + 1;  // Add the count of valid subarrays ending at the current index to the total count.
                count = i - j + 1; // Update the count of valid subarrays ending at the current index.
            }
            else if (A[i] < L)
            {                 // If the current element is less than the lower bound.
                ans += count; // Add the count of valid subarrays ending at the previous index to the total count.
            }
            else
            {              // If the current element is greater than the upper bound.
                j = i + 1; // Update the start of the current subarray to the next index.
                count = 0; // Reset the count of valid subarrays ending at the current index.
            }
        }

        return ans; // Return the total count of valid subarrays.
    }
};
