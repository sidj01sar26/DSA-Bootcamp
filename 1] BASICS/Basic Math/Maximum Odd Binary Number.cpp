// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        // Count the number of '1's in the given binary string
        int onesCount = count(s.begin(), s.end(), '1');

        // Calculate the number of '0's by subtracting the number of '1's from the length of the string
        int zerosCount = s.length() - onesCount;

        // Construct the maximum odd binary number:
        // - String of '1's with length equal to (number of '1's - 1)
        // - String of '0's with length equal to number of '0's
        // - Append '1' to make the binary number odd
        return string(onesCount - 1, '1') + string(zerosCount, '0') + "1";
    }
};
