// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int position = s.find(part); // Find the position of the first occurrence of 'part' in 's'
        while (position != string::npos)
        {                                     // While 'part' is found in 's'
            s.erase(position, part.length()); // Erase 'part' from 's' starting from 'position'
            position = s.find(part);          // Find the position of the next occurrence of 'part' in the modified 's'
        }
        return s; // Return the modified string after removing all occurrences of 'part'
    }
};
