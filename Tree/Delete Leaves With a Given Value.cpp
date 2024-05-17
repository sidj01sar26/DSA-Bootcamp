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
    TreeNode *removeLeafNodes(TreeNode *root, int target)
    {
        // If the current node is null, return null
        if (!root) return nullptr;

        // Recursively remove leaf nodes with the target value from the left subtree
        root->left = removeLeafNodes(root->left, target);

        // Recursively remove leaf nodes with the target value from the right subtree
        root->right = removeLeafNodes(root->right, target);

        // If the current node is a leaf and its value is equal to the target, remove it
        if (!root->left && !root->right && root->val == target)
        {
            return nullptr;
        }
        else
        {
            // Otherwise, return the current node
            return root;
        }
    }
};