// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string customSortString(string S, string T)
    {
        // Sort string T based on custom sorting order defined by string S
        // Using lambda function as custom comparator for sorting
        sort(T.begin(), T.end(), [&](char a, char b)
             { 
            // Comparison based on the relative positions of characters a and b in string S
            // If a is before b in S, return true; otherwise, return false
            return S.find(a) < S.find(b); });
        // Return the sorted string T
        return T;
    }
};
