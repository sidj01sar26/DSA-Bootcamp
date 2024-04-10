// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        // Continue while there's "abc" in the string
        while (!s.empty() && s.find("abc") != string::npos)
        {
            // Erase "abc" from the string
            s.erase(s.find("abc"), 3);
        }
        // Return true if the string is empty after removal of "abc"
        return s.empty();
    }
};
