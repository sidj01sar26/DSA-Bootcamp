// CodeStudio

#include <iostream>
#include <vector>
using namespace std;

vector<int> superiorElements(vector<int> &a)
{
    vector<int> ans;
    int n = a.size();
    ans.push_back(a[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > ans.back())
        {

            ans.push_back(a[i]);
        }
    }

    return ans;
}