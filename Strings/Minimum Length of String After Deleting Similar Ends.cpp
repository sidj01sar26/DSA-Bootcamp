// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumLength(string s)
    {
        int left = 0;             // Initialize the left pointer to the beginning of the string.
        int right = s.size() - 1; // Initialize the right pointer to the end of the string.

        // Move both pointers towards each other until they meet or the characters at the pointers are different.
        while (left < right && s[left] == s[right])
        {
            char ch = s[left]; // Store the character at the current left pointer.
            // Move the left pointer to the right until a different character is encountered.
            while (left <= right && s[left] == ch)
            {
                left++;
            }
            // Move the right pointer to the left until a different character is encountered.
            while (right >= left && s[right] == ch)
            {
                right--;
            }
        }

        // The length of the substring between the remaining pointers is the minimum length.
        return right - left + 1;
    }
};