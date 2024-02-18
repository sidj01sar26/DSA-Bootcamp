// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        // Initialize two pointers: one at the beginning (l) and one at the end (r) of the array.
        int l = 0;
        int r = numbers.size() - 1;

        // Loop until the two pointers meet.
        while (l < r)
        {
            // Calculate the sum of the current elements pointed by l and r.
            int s = numbers[l] + numbers[r];

            // If the sum equals the target, return the indices (1-based) of the two numbers.
            if (s == target)
            {
                return {l + 1, r + 1};
            }
            // If the sum is greater than the target, decrement r to decrease the sum.
            else if (s > target)
            {
                r--;
            }
            // If the sum is less than the target, increment l to increase the sum.
            else
            {
                l++;
            }
        }

        // If no such pair is found, return {-1, -1}.
        return {-1, -1};
    }
};