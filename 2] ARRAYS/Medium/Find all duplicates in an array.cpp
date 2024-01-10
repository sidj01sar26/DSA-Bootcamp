// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        unordered_set<int> set;
        vector<int> duplicates;
        for (int num : nums)
        {
            if (set.count(num))
            {
                duplicates.push_back(num);
            }
            else
            {
                set.insert(num);
            }
        }
        return duplicates;
    }
};
