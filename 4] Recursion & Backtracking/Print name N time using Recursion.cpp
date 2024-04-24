#include <iostream>
#include <vector>
using namespace std;

vector<string> printNTimes(int n)
{
    if (n == 0)
    {
        return {};
    }

    vector<string> v = printNTimes(n - 1);
    v.push_back("Steve Jobs");

    return v;
}