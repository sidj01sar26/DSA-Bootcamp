// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        unordered_set<int> visited; // Initialize an unordered set to track the numbers

        // Iterate through each number in the input vector
        for (int num : nums)
        {
            if (!visited.insert(num).second)
            {
                // If the number is already in the set, remove it (indicating it's a duplicate)
                visited.erase(num);
            }
        }

        // Convert the set to a vector and return it
        return vector<int>(visited.begin(), visited.end());
    }
};