// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        // Initialize two arrays to map characters from 's' and 't'
        int map_s[128] = {0}; // Stores the mapping for characters in 's'
        int map_t[128] = {0}; // Stores the mapping for characters in 't'

        int len = s.size(); // Length of the strings (assuming s and t are of equal length)

        // Iterate through each character in the strings
        for (int i = 0; i < len; i++)
        {
            // If the mappings of the current characters in 's' and 't' do not match
            if (map_s[s[i]] != map_t[t[i]])
            {
                return false; // Return false indicating the strings are not isomorphic
            }
            // Update the mappings for the current characters
            map_s[s[i]] = map_t[t[i]] = i + 1;
        }
        // If all characters are mapped consistently, return true
        return true;
    }
};