// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        // Sort tokens to facilitate the greedy approach
        sort(tokens.begin(), tokens.end());

        int score = 0, maxScore = 0;
        // Initialize score variables
        int left = 0, right = tokens.size() - 1;
        // Pointers to the leftmost and rightmost elements

        // Greedy approach:
        // We try to maximize the score by spending power to gain tokens and vice versa.
        while (left <= right)
        {
            // If current power is enough to purchase the token at left pointer
            if (power >= tokens[left])
            {
                power = power - tokens[left++];
                // Spend power to buy the token
                maxScore = max(maxScore, ++score);
                // Increment score and update maxScore if necessary
            }
            else if (score > 0)
            {                                    // If we have some tokens to spend
                power = power + tokens[right--]; // Gain power by spending tokens
                score--;                         // Decrement score as we spend tokens
            }
            else
            {
                // If neither power is enough nor we have tokens to spend, break the loop
                break;
            }
        }

        return maxScore; // Return the maximum score achieved
    }
};
