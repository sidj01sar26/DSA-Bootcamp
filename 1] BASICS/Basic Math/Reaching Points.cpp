// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool reachingPoints(int sx, int sy, int tx, int ty)
    {
        // Loop until either sx or sy reach tx or ty respectively
        while (sx < tx && sy < ty)
        {
            // Reduce tx or ty whichever is larger, such that tx and ty will be within sx and sy respectively
            if (tx > ty)
            {
                tx = tx % ty; // Reduce tx by remainder when divided by ty
            }
            else
            {
                ty = ty % tx; // Reduce ty by remainder when divided by tx
            }
        }

        // If sx reaches tx and sy reaches ty, return true
        if (sx == tx && sy <= ty && (ty - sy) % sx == 0)
            return true;

        // If sy reaches ty and sx reaches tx, return true
        if (sy == ty && sx <= tx && (tx - sx) % sy == 0)
            return true;

        // If none of the conditions above satisfy, return false
        return false;
    }
};
