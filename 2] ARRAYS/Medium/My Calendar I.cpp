// Leetcode

#include <bits/stdc++.h>
using namespace std;

class MyCalendar
{
public:
    map<int, int> mp; // Map to store the end and start times of booked intervals

    MyCalendar() {}

    bool book(int start, int end)
    {
        // Find the first interval with a start time greater than the given start time
        auto it = mp.upper_bound(start);

        // Check if the new event does not overlap with the found interval and the previous interval
        if (it == mp.end() || it->second >= end)
        {
            mp[end] = start; // Book the new event by adding it to the map
            return true;     // Return true indicating the event is successfully booked
        }

        return false; // Return false if there is an overlap
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */