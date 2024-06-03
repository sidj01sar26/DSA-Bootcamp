// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minNumber(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> freq(10, 0); 
        // Create a frequency array for digits 0-9, initialized to 0

        for (int num : nums1) freq[num]++; 
        // Increment the count for each number in nums1
        for (int num : nums2) freq[num]++; 
        // Increment the count for each number in nums2

        for (int i = 1; i <= 9; i++)
        { 
            // Check digits from 1 to 9
            if (freq[i] == 2) return i; 
            // If a digit appears in both arrays, return it
        }

        int mn1 = *min_element(nums1.begin(), nums1.end()); 
        // Find the minimum element in nums1
        int mn2 = *min_element(nums2.begin(), nums2.end()); 
        // Find the minimum element in nums2

        if (mn1 > mn2) swap(mn1, mn2); 
        // Ensure mn1 is the smaller or equal of the two

        return mn1 * 10 + mn2; 
        // Return the concatenated result of the two minimums
    }
};
