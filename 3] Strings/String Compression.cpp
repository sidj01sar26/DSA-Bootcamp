// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to compress the input array of characters
    int compress(vector<char> &chars)
    {
        int index = 0;           // Index to keep track of position in the compressed array
        int count = 1;           // Count of consecutive characters
        int previous = chars[0]; // Previous character

        // Iterate through the array
        for (int i = 1; i < chars.size(); i++)
        {
            // If the current character is the same as the previous one, increase the count
            if (chars[i] == previous)
            {
                count++;
            }
            else
            {
                // If the current character is different, add the previous character to the compressed array
                chars[index++] = previous;
                // If the count of consecutive characters is greater than 1, encode it
                if (count > 1)
                {
                    int start = index;
                    // Encode the count into characters
                    while (count)
                    {
                        chars[index++] = (count % 10) + '0'; // Convert digit to character
                        count /= 10;                         // Move to next digit
                    }
                    // Reverse the encoded count to get the correct order
                    reverse(chars.begin() + start, chars.begin() + index);
                }
                // Update previous character and reset count
                previous = chars[i];
                count = 1;
            }
        }

        // Add the last character to the compressed array
        chars[index++] = previous;
        // If the count of consecutive characters is greater than 1 for the last character, encode it
        if (count > 1)
        {
            int start = index;
            // Encode the count into characters
            while (count)
            {
                chars[index++] = (count % 10) + '0'; // Convert digit to character
                count /= 10;                         // Move to next digit
            }
            // Reverse the encoded count to get the correct order
            reverse(chars.begin() + start, chars.begin() + index);
        }
        // Return the length of the compressed array
        return index;
    }
};