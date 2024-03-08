// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        vector<int> freq(101, 0);
        // Initialize a vector to store the frequency of elements (range from 0 to 100)
        int maxFreq = 0, ans = 0;
        // Initialize variables to keep track of the maximum frequency and the answer

        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++; // Increment the frequency of the current number

            if (freq[nums[i]] > maxFreq)
            {
                // If the frequency of the current number is greater than the maximum frequency so far
                maxFreq = freq[nums[i]]; // Update the maximum frequency
                ans = freq[nums[i]];
                // Update the answer to be the frequency of the current number
            }
            else if (freq[nums[i]] == maxFreq)
            {
                // If the frequency of the current number is equal to the maximum frequency so far
                ans += freq[nums[i]];
                // Increment the answer by the frequency of the current number
            }
        }

        return ans; // Return the answer
    }
};
