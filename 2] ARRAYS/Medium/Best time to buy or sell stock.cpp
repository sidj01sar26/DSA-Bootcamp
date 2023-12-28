// Leetcode

// Companies - Oracle Walmart Google Adobe Samsung Microsoft Flipkart Netflix Facebook
//             CRED Meesho Swiggy Dream11 InMobi Oyo PayTM Byju's

#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); ++i)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }

            int todayProfit = prices[i] - minPrice;
            maxProfit = max(maxProfit, todayProfit);
        }

        return maxProfit;
    }
};
