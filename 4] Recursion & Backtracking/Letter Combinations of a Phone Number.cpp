// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Recursive function to generate letter combinations from digits
    void solve(vector<string> &answer, int index, string output, string digits, vector<string> &mapping)
    {
        // Base case: If all digits are processed, add the output to the answer vector
        if (index >= digits.length())
        {
            answer.push_back(output);
            return;
        }

        // Get the current digit and its corresponding characters
        int digit = digits[index] - '0';
        string value = mapping[digit];

        // Iterate through the characters corresponding to the current digit
        for (int i = 0; i < value.length(); i++)
        {
            char ch = value[i];
            output.push_back(ch);                              
            // Add the character to the output
            solve(answer, index + 1, output, digits, mapping); 
            // Recur with the next digit
            output.pop_back();                                 
            // Backtrack: Remove the last added character
        }
    }

    // Main function to generate letter combinations from digits
    vector<string> letterCombinations(string digits)
    {
        vector<string> answer; // Vector to store the generated combinations

        if (digits.length() == 0) // If input digits is empty, return empty vector
        {
            return answer;
        }

        int index = 0;              // Start index for processing digits
        string output = "";         // Current combination
        vector<string> mapping(10); // Mapping of digits to characters
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";

        // Start recursive function to generate combinations
        solve(answer, index, output, digits, mapping);

        return answer; // Return the generated combinations
    }
};