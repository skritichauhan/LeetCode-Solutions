/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left=height(root->left);
        int right=height(root->right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        int left=height(root->left);
        int right=height(root->right);
        int ldiameter=diameterOfBinaryTree(root->left);
        int rdiameter=diameterOfBinaryTree(root->right);
        return max(left+right,max(ldiameter,rdiameter));
        
    }
};
