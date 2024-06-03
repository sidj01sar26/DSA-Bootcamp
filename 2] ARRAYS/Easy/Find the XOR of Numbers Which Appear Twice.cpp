// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int duplicateNumbersXOR(vector<int> &nums)
    {
        unordered_set<int> seen;
        // Create a set to keep track of seen numbers
        int ans = 0;
        // Initialize the answer to 0
        for (int x : nums)
        {
            // Iterate through each number in the input vector
            if (!seen.insert(x).second)
                // Try to insert the number into the set. If the insertion fails, it means the number is a duplicate
                ans ^= x;
            // XOR the duplicate number with the answer
        }
        return ans; // Return the result which is the XOR of all duplicate numbers
    }
};
