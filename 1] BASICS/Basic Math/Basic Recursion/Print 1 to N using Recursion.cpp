#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int x)
{
    if (x == 0)
    {
        return {};
    }
    vector<int> v = printNos(x - 1);
    v.insert(v.end(), x);
    return v;
}