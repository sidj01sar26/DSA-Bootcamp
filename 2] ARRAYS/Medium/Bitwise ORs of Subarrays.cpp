// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subarrayBitwiseORs(vector<int> &arr)
    {
        unordered_set<int> st, cur;
        // st stores unique bitwise ORs, cur stores current set of bitwise ORs
        for (int num : arr)
        {
            // iterate through each element in the array
            unordered_set<int> nxt;
            // create a new set to store the next set of bitwise ORs
            nxt.insert(num);
            // insert the current element as a bitwise OR
            for (int prev : cur)
            {
                // iterate through the current set of bitwise ORs
                nxt.insert(prev | num);
                // compute bitwise OR of previous result and current element, insert into next set
            }
            cur.swap(nxt);
            // update current set to the next set
            st.insert(cur.begin(), cur.end());
            // insert all elements from current set to the final result set
        }
        return st.size();
        // return the size of the final set which contains unique bitwise ORs
    }
};