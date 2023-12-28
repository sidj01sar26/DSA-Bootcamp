// CodeStudio

#include <vector>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a)
{
    int n = a.size();
    vector<int> vec(n + 1, 0);
    vector<int> ans(2);

    for (int i = 0; i < n; i++)
    {
        vec[a[i]]++;
    }

    for (int i = 1; i < n + 1; i++)
    {
        if (vec[i] == 2)
        {
            ans[0] = i;
        }

        if (vec[i] == 0)
        {
            ans[1] = i;
        }
    }

    return ans;
};