// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_map<char, int> row[9], col[9], blk[9];

        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
            {
                char current = board[i][j];

                if (current != '.')
                {
                    if (++row[i][current] > 1 || ++col[j][current] > 1 ||
                        ++blk[i / 3 * 3 + j / 3][current] > 1)
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};