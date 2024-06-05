// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string toHex(int num)
    {
        unsigned int ourNum = num;
        // Use unsigned int to handle negative numbers correctly
        string str;
        // Initialize an empty string to store the hexadecimal representation
        const char hexDigits[] = "0123456789abcdef";
        // Array of hexadecimal digits

        // Convert the number to hexadecimal by repeatedly dividing by 16
        do
        {
            str += hexDigits[ourNum % 16];
            // Append the corresponding hex digit to the string
            ourNum /= 16;
            // Divide the number by 16
        } while (ourNum != 0);
        // Continue until the number becomes 0

        // The digits are in reverse order, so reverse the string before returning
        return {str.rbegin(), str.rend()};
    }
};