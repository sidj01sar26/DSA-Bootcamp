// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int matchPlayersAndTrainers(vector<int> &players, vector<int> &trainers)
    {
        // Sorting both players and trainers to simplify matching process
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int count = 0;                         // Counter for matched players and trainers
        int playerIndex = 0, trainerIndex = 0; // Index pointers for players and trainers

        // Matching players with trainers
        while (playerIndex < players.size() && trainerIndex < trainers.size())
        {
            // If current player can be matched with current trainer
            if (players[playerIndex] <= trainers[trainerIndex])
            {
                count++;        // Increment count
                playerIndex++;  // Move to the next player
                trainerIndex++; // Move to the next trainer
            }
            else
            {
                trainerIndex++; // Current player cannot be matched, move to the next trainer
            }
        }
        return count; // Return the count of matched players and trainers
    }
};