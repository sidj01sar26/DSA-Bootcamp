// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        long long ans = 0;
        // Initialize the variable to store the maximum happiness sum
        sort(happiness.begin(), happiness.end());
        // Sort the happiness vector in ascending order

        // Traverse the sorted happiness vector from the end
        // Iterate until either all elements are processed or k becomes 0
        for (int i = happiness.size() - 1, j = 0; i >= 0 && k > 0; i--, j++, k--)
        {
            // If happiness of the current person after j days is still positive
            if (happiness[i] - j > 0)
            {
                // Add the happiness value to the answer
                ans += happiness[i] - j;
            }
        }

        // Return the maximum happiness sum
        return ans;
    }
};
