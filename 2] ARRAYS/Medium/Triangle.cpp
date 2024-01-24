// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        vector<int> minPath = triangle[triangle.size() - 1];
        for (int i = triangle.size() - 2; i >= 0; i--)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {
                minPath[j] = triangle[i][j] + min(minPath[j], minPath[j + 1]);
            }
        }
        return minPath[0];
    }
};
