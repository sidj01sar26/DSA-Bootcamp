// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isReachable(int targetX, int targetY) {
        // Initialize x and y with the target coordinates
        int x = targetX, y = targetY;
        
        // Loop until we find a solution or determine impossibility
        while (true) {
            // Divide x by 2 until it becomes odd
            while (x % 2 == 0) x /= 2;
            // Divide y by 2 until it becomes odd
            while (y % 2 == 0) y /= 2;
            
            // Ensure x <= y
            if (x > y) swap(x, y);
            
            // If both x and y are 1, then the target is reachable
            if (x == 1 && y == 1) return true;
            
            // If x == y, then we cannot progress further, exit loop
            if (x == y) break;
            
            // Add x to y to make progress
            y += x;
        }
        
        // If we couldn't reach the target, return false
        return false;
    }
};
