// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossibleToSplit(vector<int> &nums)
    {
        int n = nums.size();

        // If the size of the array is odd, it's impossible to split into pairs.
        if (n % 2 != 0)
        {
            return false;
        }

        // HashMap to store the counts of each number in the array.
        unordered_map<int, int> counts;

        // Counting the occurrences of each number.
        for (int i = 0; i < n; i++)
        {
            int num = nums[i];
            counts[num]++;

            // If the count of any number exceeds 2, it's not possible to form pairs.
            if (counts[num] > 2)
            {
                return false;
            }
        }

        // If all numbers can form pairs, return true.
        return true;
    }
};