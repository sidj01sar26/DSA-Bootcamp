// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // Create an unordered_map to store groups of anagrams.
        unordered_map<string, vector<string>> mp;

        // Iterate through each string in the input vector.
        for (auto x : strs)
        {
            // Make a copy of the current string.
            string word = x;
            // Sort the characters of the string.
            sort(word.begin(), word.end());
            // Insert the sorted string into the map and associate it with its original string.
            mp[word].push_back(x);
        }

        // Create a 2D vector to store the groups of anagrams.
        vector<vector<string>> answer;
        // Iterate through each entry in the map.
        for (auto x : mp)
        {
            // Add the group of anagrams to the answer vector.
            answer.push_back(x.second);
        }
        // Return the answer vector containing groups of anagrams.
        return answer;
    }
};