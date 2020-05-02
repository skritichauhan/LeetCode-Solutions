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
int Sum(TreeNode* root, int &ans)
{
        if(root==NULL)
            return 0;
        int left=Sum(root->left,ans);
        int right=Sum(root->right,ans);
        int pass=max(max(left,right)+root->val,root->val);
        int rootans=max(pass,left+right+root->val);
        ans=max(ans,rootans);
        return pass;
}
class Solution {
public:
    int maxPathSum(TreeNode* root)
    {
        
        int ans=INT_MIN;
        Sum(root,ans);
        return ans;
    }
};
