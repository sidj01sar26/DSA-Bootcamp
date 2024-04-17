// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to determine if lemonade change can be given
    bool lemonadeChange(vector<int> &bills)
    {
        int fives = 0, tens = 0; // Initialize count of $5 and $10 bills
        for (int i = 0; i < bills.size(); i++)
        {
            int bill = bills[i]; // Current bill
            if (bill == 5)
            {
                fives++; // Increment $5 count
            }
            else if (bill == 10)
            {
                if (fives == 0)
                { // No $5 bill available for change
                    return false;
                }
                fives--; // Use a $5 bill
                tens++;  // Get a $10 bill
            }
            else
            { // $20 bill
                if (tens && fives)
                {            // Check if $10 and $5 bills available
                    tens--;  // Use a $10 bill
                    fives--; // Use a $5 bill
                }
                else if (fives >= 3)
                {               // Check if three $5 bills available
                    fives -= 3; // Use three $5 bills
                }
                else
                { // No suitable combination to give change
                    return false;
                }
            }
        }
        return true; // Able to give change for all customers
    }
};
