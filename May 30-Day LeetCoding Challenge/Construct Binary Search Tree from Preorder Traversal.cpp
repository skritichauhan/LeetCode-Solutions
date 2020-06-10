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
    int idx=0;
    TreeNode* bstFromPreorder(vector<int>& preorder, int bound=INT_MAX) {
        if(idx==preorder.size() || preorder[idx]>bound )
            return NULL;
        TreeNode* temp=new TreeNode(preorder[idx++]);
        temp->left=bstFromPreorder(preorder,temp->val);
        temp->right=bstFromPreorder(preorder,bound);
        return temp;
    }
};
