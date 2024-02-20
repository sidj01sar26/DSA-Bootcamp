// Leetcode

#include <vector>
using namespace std;

class Solution
{
public:
    int countTriplets(vector<int> &arr)
    {
        int count = 0; // Initialize count to keep track of triplets

        for (int i = 0; i < arr.size(); ++i)
        {
            // Loop through array
            int a = arr[i];
            // Define 'a' as the XOR of elements from index 'i' to 'j-1'
            for (int j = i + 1; j < arr.size(); ++j)
            {
                // Loop through array starting from index 'i+1'
                int b = 0;
                // Initialize 'b' to represent the XOR of elements from index 'j' to 'k'

                for (int k = j; k < arr.size(); ++k)
                {
                    // Loop through array starting from index 'j'
                    b ^= arr[k];
                    // Calculate XOR of elements from index 'j' to 'k'
                    if (a == b)
                    {
                        // If 'a' is equal to 'b', increment count
                        count++;
                    }
                }
                a ^= arr[j]; // Update 'a' by XORing it with the next element
            }
        }
        return count; // Return the total count of triplets
    }
};
