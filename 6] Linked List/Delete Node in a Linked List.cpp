// Leetcode

#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    // Function to delete a node in a singly-linked list.
    void deleteNode(ListNode *node)
    {
        // Copy the value of the next node to the current node.
        node->val = node->next->val;
        // Point the current node to the node after the next node.
        node->next = node->next->next;
    }
};