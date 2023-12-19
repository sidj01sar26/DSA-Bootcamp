// Companies - VMWare Amazon Microsoft Hike SnapDeal Adobe Google Cisco

#include <algorithm>
using namespace std;

class Solution
{
public:
    int kthSmallest(int arr[], int l, int r, int k)
    {
        sort(arr + l, arr + r + 1);
        return *(arr + k - 1);
    }
};