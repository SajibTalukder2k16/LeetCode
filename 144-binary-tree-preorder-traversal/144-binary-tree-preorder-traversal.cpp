/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>out;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return out;
        out.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return out;
    }
};