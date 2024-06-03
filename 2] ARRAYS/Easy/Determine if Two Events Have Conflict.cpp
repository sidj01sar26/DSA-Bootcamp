// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool haveConflict(vector<string> &event1, vector<string> &event2)
    {
        // Check if the start time of event2 is within the time range of event1
        // OR if the start time of event1 is within the time range of event2
        return (event1[0] <= event2[0] && event2[0] <= event1[1]) ||
               (event2[0] <= event1[0] && event1[0] <= event2[1]);
    }
};
