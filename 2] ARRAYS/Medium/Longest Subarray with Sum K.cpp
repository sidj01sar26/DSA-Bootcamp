// CodeStudio

#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int low = 0;
    int result = 0;
    long long sum = 0;

    for (int high = 0; high < a.size(); high++)
    {
        sum = sum + a[high];
        while (sum > k)
        {
            sum = sum - a[low];
            low++;
        }
        if (sum == k)
        {
            result = max(result, (high - low + 1));
        }
    }
    return result;
}
