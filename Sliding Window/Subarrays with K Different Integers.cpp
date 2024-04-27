// Leetcode - Hard

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        // Count of subarrays with at most K distinct elements
        return atMostKDistinct(nums, k) - atMostKDistinct(nums, k - 1);
    }

    int atMostKDistinct(vector<int> &nums, int k)
    {
        int n = nums.size();
        // Frequency array to keep track of the count of each element
        vector<int> freq(n + 1, 0);
        int i = 0, j = 0, distinct = 0, count = 0;

        while (j < n)
        {
            // Increase distinct count if a new element is encountered
            if (freq[nums[j]] == 0)
            {
                distinct++;
            }
            freq[nums[j]]++;
            // Adjust the window if the distinct count exceeds K
            while (distinct > k)
            {
                freq[nums[i]]--;
                // Decrease distinct count if an element is removed from the window
                if (freq[nums[i]] == 0)
                {
                    distinct--;
                }
                i++;
            }
            // Add the count of subarrays ending at index j
            count += j - i + 1;
            j++;
        }

        return count;
    }
};