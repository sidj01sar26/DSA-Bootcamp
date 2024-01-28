// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseStr(string s, int k)
    {
        int n = s.size();

        // Iterate over the string with a step of 2k
        for (int i = 0; i < n; i += 2 * k)
        {
            // Calculate the end index for the reverse operation
            int end = min(i + k, n);

            // Reverse the substring from i to end
            reverse(s.begin() + i, s.begin() + end);
        }

        // Return the modified string
        return s;
    }
};
