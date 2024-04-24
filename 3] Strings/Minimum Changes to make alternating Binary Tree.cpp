// Leetcode

#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    int minOperations(string s)
    {
        int count1 = 0;
        int count2 = 0;
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            count1 += (s[i] - '0' != i % 2);
            count2 += (s[i] - '0' == i % 2);
        }
        
        return min(count1, count2);
    }
};