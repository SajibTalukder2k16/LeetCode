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
    TreeNode* traversing(TreeNode* root1, TreeNode* root2,TreeNode *root){
        if(root1==NULL && root2==NULL)
        {
            root=NULL;
            return root;
        }
        root=new TreeNode;
        if(root1==NULL){
            root->val=root2->val;
            root->left=root2->left;
            root->right=root2->right;
            return root;
        }
        if(root2==NULL){
            root->val=root1->val;
            root->left=root1->left;
            root->right=root1->right;
            return root;
        }
        root->val=root1->val+root2->val;
        root->left=traversing(root1->left,root2->left,root->left);
        root->right=traversing(root1->right,root2->right,root->right);
        return root;   
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* root=NULL;
        return traversing(root1,root2,root);
    }
};