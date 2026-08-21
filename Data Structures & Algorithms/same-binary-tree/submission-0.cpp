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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr)
        {
            return true;
        }
        
        if(p==nullptr || q==nullptr)
        {
            return false;
        }

        if(p->val != q->val)
        {
            return false;
        }
              
        TreeNode* p_left=p->left;
        TreeNode* p_right=p->right;
        TreeNode* q_left=q->left;
        TreeNode* q_right=q->right;

        return isSameTree(p_left, q_left) && isSameTree(p_right, q_right);
    }
};
