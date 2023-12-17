// CodeStudio

#include <iostream>
#include <vector>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 1 && nums[i] <= n)
        {
            v[nums[i] - 1]++;
        }
    }
    return v;
}