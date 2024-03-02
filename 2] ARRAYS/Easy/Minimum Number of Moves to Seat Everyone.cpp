// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        // Sorting the seats and students positions to align them
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        // Initializing a variable to store the sum of moves
        int sum = 0;

        // Looping through the seats and calculating the absolute difference between seat and student positions
        for (int i = 0; i < seats.size(); i++)
        {
            sum += abs(seats[i] - students[i]); // Calculating the absolute difference and adding it to the sum
        }

        // Returning the total sum of moves
        return sum;
    }
};
