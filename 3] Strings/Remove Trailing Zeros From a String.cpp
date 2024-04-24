// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeTrailingZeros(string num)
    {
        // While the last character of the string is '0'
        while (num.back() == '0')
        {
            // Remove the last character of the string
            num.pop_back();
        }
        // Return the modified string
        return num;
    }
};