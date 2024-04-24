// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkDistances(string s, vector<int> &distance)
    {
        int n = s.size(); // Get the size of the string

        // Loop through each character in the string
        for (int i = 0; i < n; i++)
        {
            // For each character, loop through the characters after it
            for (int j = i + 1; j < n; j++)
            {
                // If we find two characters that are the same
                if (s[i] == s[j])
                {
                    // Check if the distance between them is not equal to the desired distance
                    if (j - i - 1 != distance[s[i] - 'a'])
                    {
                        return false; // If not, return false
                    }
                }
            }
        }

        return true; // If all characters satisfy the conditions, return true
    }
};