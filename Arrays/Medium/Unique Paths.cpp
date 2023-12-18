// Leetcode

// Companies - Oracle Tekion-corp Amazon Samsung Netflix Walmart Adobe Facebook
//             Google CRED Meesho Swiggy Dream11 InMobi

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        long long result = 1;
        for (int i = 1; i < n; i++)
        {
            result = result * (m + i - 1) / i;
        }
        return result;
    }
};