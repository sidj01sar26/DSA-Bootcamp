#include <iostream>
using namespace std;

void nLetterTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    nLetterTriangle(7);
    return 0;
}
