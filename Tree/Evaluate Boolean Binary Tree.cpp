// Leetcode

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool evaluateTree(TreeNode *root)
    {
        // If the node's value is 1 or 0, return it as a boolean
        if (root->val == 1 || root->val == 0) return root->val;

        // Recursively evaluate the left and right subtrees
        bool l = evaluateTree(root->left);
        bool r = evaluateTree(root->right);

        // If the node's value is 3, return the logical AND of the left and right results
        // Otherwise, return the logical OR of the left and right results
        return (root->val == 3) ? (l && r) : (l || r);
    }
};