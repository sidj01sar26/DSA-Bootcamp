// CodeStudio

#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    vector<int> result;

    int i;
    int largest = a[0];
    int smallest = a[0];
    int secondlargest = INT_MIN;
    int secondsmallest = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondlargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondlargest && a[i] != largest)
        {
            secondlargest = a[i];
        }

        if (a[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < secondsmallest && a[i] != smallest)
        {
            secondsmallest = a[i];
        }
    }

    result.push_back(secondlargest);
    result.push_back(secondsmallest);
    return result;
}
