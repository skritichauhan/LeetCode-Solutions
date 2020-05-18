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
    bool isCousins(TreeNode* root, int x, int y) 
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            unordered_set<int>set;
            for(int i=0;i<size;i++)
            {
                TreeNode* front=q.front();
                q.pop();
                set.insert(front->val);
                if(front->left && front->right)
                {
                    if((front->left->val==x && front->right->val==y)||(front->left->val==y && front->right->val==x))
                        return false;
                }
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
            
            }
            if((find(set.begin(),set.end(),x)!=set.end()) && (find(set.begin(),set.end(),y)!=set.end()))
                return true;
           
        }
        return false;
        
        
    }
};
