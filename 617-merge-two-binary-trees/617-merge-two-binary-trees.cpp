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
    void traversing(TreeNode* root1, TreeNode* root2,TreeNode *root){
        if(root1==NULL && root2==NULL)
        {
            root=NULL;
            return;
        }
        if(root1==NULL){
            root->val=root2->val;
            root->left=root2->left;
            root->right=root2->right;
            return;
        }
        if(root2==NULL){
            root->val=root1->val;
            root->left=root1->left;
            root->right=root1->right;
            return;
        }
        TreeNode* leftNode=new TreeNode();
        TreeNode* rightNode=new TreeNode();
        root->left=leftNode;
        root->right=rightNode;
        root->val=root1->val+root2->val;
        if(root1->left!=NULL || root2->left!=NULL)
            traversing(root1->left,root2->left,leftNode);
        else
            root->left=NULL;
        if(root1->right!=NULL || root2->right!=NULL)
            traversing(root1->right,root2->right,rightNode);
        else
            root->right=NULL;
        return;
            
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL)
            return root1;
        TreeNode* root=new TreeNode();
        traversing(root1,root2,root);
        return root;
    }
};