// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        // Initialize count array to store the count of each preference
        int count[2] = {0};

        // Count the number of students with each preference
        for (int i = 0; i < students.size(); i++)
            count[students[i]]++;

        // Check if each sandwich can be served to a student
        for (int i = 0; i < sandwiches.size(); i++)
            if (count[sandwiches[i]] > 0)
                count[sandwiches[i]]--; // Serve sandwich and decrement count
            else
                return count[!sandwiches[i]]; // Return count of unserved students

        return 0; // All sandwiches served
    }
};
