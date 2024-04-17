// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        // Convert integers to strings
        vector<string> numbers;
        for (auto n : nums)
        {
            numbers.push_back(to_string(n));
        }

        // Sort strings based on custom comparator
        sort(numbers.begin(), numbers.end(), [](string a, string b)
             {
            // Custom comparator: Concatenate a and b, and compare which concatenation is greater
            return (a + b) > (b + a); });

        // Handle the case where the largest number is 0
        if (numbers[0] == "0")
        {
            return "0"; // If the largest number is 0, return "0" directly
        }

        // Concatenate sorted strings to form the result
        string answer;
        for (auto str : numbers)
        {
            answer += str;
        }
        return answer;
    }
};
