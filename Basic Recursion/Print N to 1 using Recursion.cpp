#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int x)
{
    if (x <= 0)
    {
        return {};
    }

    cout << x << " ";
    return printNos(x - 1);
}