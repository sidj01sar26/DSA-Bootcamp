// GFG

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string calc_Sum(int *a, int n, int *b, int m)
    {
        string s;     // Initialize an empty string to store the result
        char carry{}; // Initialize a variable to store the carry

        // Loop until there are digits in any of the input arrays or carry exists
        while (n || m || carry)
        {
            if (n)
                carry += a[--n]; // If there are digits in array a, add it to carry
            if (m)
                carry += b[--m];   // If there are digits in array b, add it to carry
            s += carry % 10 + '0'; // Add the last digit of carry to the result string
            carry /= 10;           // Update the carry for the next iteration
        }

        // Remove trailing zeros from the result string
        while (s.back() == '0')
            s.pop_back();

        // Reverse the result string and return it
        return reverse(s.begin(), s.end()), s;
    }
};