// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeCircle(std::string moves) {
        // Initialize coordinates for x and y
        int x = 0, y = 0;
        
        // Iterate through each move in the string
        for (int i = 0; i < moves.size(); i++) {
            // Update coordinates based on the move
            if (moves[i] == 'U') x++;
            else if (moves[i] == 'D') x--;
            else if (moves[i] == 'R') y++;
            else if (moves[i] == 'L') y--;
        }
        
        // Return true if the final coordinates are (0, 0), indicating it's back to the origin
        return (x == 0 && y == 0);
    }
};