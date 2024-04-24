// Leetcode - HARD

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Initialize a map to store the mapping between numbers and their corresponding words
    // The map is initialized in decreasing order of the numbers for easier processing
    vector<pair<int, string>> mp = {
        {1000000000, "Billion"},
        {1000000, "Million"},
        {1000, "Thousand"},
        {100, "Hundred"},
        {90, "Ninety"},
        {80, "Eighty"},
        {70, "Seventy"},
        {60, "Sixty"},
        {50, "Fifty"},
        {40, "Forty"},
        {30, "Thirty"},
        {20, "Twenty"},
        {19, "Nineteen"},
        {18, "Eighteen"},
        {17, "Seventeen"},
        {16, "Sixteen"},
        {15, "Fifteen"},
        {14, "Fourteen"},
        {13, "Thirteen"},
        {12, "Twelve"},
        {11, "Eleven"},
        {10, "Ten"},
        {9, "Nine"},
        {8, "Eight"},
        {7, "Seven"},
        {6, "Six"},
        {5, "Five"},
        {4, "Four"},
        {3, "Three"},
        {2, "Two"},
        {1, "One"}};

    // Function to convert a given number into words
    string numberToWords(int num)
    {
        // If the number is 0, return "Zero"
        if (num == 0)
        {
            return "Zero";
        }

        // Iterate through the map to find the largest number less than or equal to the given number
        for (auto it : mp)
        {
            if (num >= it.first)
            {
                string a = "";
                // If the number is greater than or equal to 100, recursively call numberToWords for the quotient
                if (num >= 100)
                {
                    a = numberToWords(num / it.first) + " ";
                }
                string b = it.second; 
                // Get the corresponding word for the current number

                string c = "";
                // If there's a remainder, recursively call numberToWords for the remainder
                if (num % it.first != 0)
                {
                    c = " " + numberToWords(num % it.first);
                }
                // Concatenate the parts and return the result
                return a + b + c;
            }
        }
        // Return an empty string if the number is not found in the map
        return "";
    }
};