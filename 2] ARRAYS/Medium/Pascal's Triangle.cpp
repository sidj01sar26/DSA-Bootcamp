// Leetcode

// Companies - Google Microsoft Tekion-corp Facebook Netflix Oracle Samsung Adobe
//             CRED Meesho Swiggy Dream11 InMobi Oyo PayTM Byju's

#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> output;

        for (int i = 0; i < numRows; i++)
        {
            vector<int> row(i + 1, 1);

            for (int j = 1; j < i; j++)
            {
                row[j] = output[i - 1][j - 1] + output[i - 1][j];
            }

            output.push_back(row);
        }

        return output;
    }
};
