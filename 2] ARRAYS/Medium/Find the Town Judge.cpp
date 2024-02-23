// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        // Initialize trust counts for each person
        vector<int> trustCounts(n + 1, 0);

        // Iterate through the trust vector to update trust counts
        for (int i = 0; i < trust.size(); i++)
        {
            // Increment trust count for the person being trusted
            trustCounts[trust[i][1]]++;
            // Decrement trust count for the person who trusts
            trustCounts[trust[i][0]]--;
        }

        // Check each person to find the judge
        for (int i = 1; i <= n; i++)
        {
            // If a person is trusted by n - 1 people and trusts nobody
            if (trustCounts[i] == n - 1)
            {
                // Return the label of the judge
                return i;
            }
        }
        // If no judge found, return -1
        return -1;
    }
};
