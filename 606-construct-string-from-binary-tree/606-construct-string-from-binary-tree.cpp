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
    //string output = "";
    string tree2str(TreeNode* root) {
        if(root==NULL)
            return "";
        stringstream stream;
        stream << root->val;
        string str;
        stream >> str;
        string left = tree2str(root->left);
        string right = tree2str(root->right);
        if(left!="")
            str+="("+left+")";
        if(left=="" && right!="")
            str+="()";
        if(right!="")
            str+="("+right+")";
        return str;
        //return (str+"("+left+")"+"("+right+")");
        
        
        //return output;
    }
};