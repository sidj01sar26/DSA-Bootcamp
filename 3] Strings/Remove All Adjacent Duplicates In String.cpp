// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        string answer = "";
        // Initialize an empty string to store the result
        for (int i = 0; i < s.length(); i++)
        {
            // Loop through each character in the input string
            if (!answer.empty() && answer.back() == s[i])
            {
                // Check if answer is not empty and the current character is same as the last character in answer
                answer.pop_back();
                // If there is a duplicate, remove the last character from answer
            }
            else
            {
                answer.push_back(s[i]);
                // If not a duplicate, add the current character to answer
            }
        }
        return answer; // Return the resulting string without duplicates
    }
};

class Solution
{
public:
    string removeDuplicates(string s)
    {
        string answer = "";
        int i = 0;

        while (i < s.length())
        {
            if (answer.length() > 0)
            {
                if (answer[answer.length() - 1] == s[i])
                {
                    answer.pop_back();
                }
                else
                {
                    answer.push_back(s[i]);
                }
            }
            else
            {
                answer.push_back(s[i]);
            }
            i++;
        }
        return answer;
    }
};
