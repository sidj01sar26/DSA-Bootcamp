#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        // Initialize the left and right pointers for binary search.
        int left = 0, right = arr.size() - k;

        // Perform binary search until left pointer meets or crosses the right pointer.
        while (left < right)
        {
            // Calculate the mid index.
            int mid = (left + right) / 2;

            // Check if the right group has a closer element to x than the left group.
            if (x - arr[mid] > arr[mid + k] - x)
            {
                left = mid + 1; // Adjust left pointer.
            }
            else
            {
                right = mid; // Adjust right pointer.
            }
        }

        // Return the subvector containing the k closest elements to x.
        return {arr.begin() + left, arr.begin() + left + k};
    }
};
