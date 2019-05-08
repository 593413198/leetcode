/*!***********************
* @brief:  leetcode-111-二叉树的最小深度
* @date:   2019/5/8
* @envir:  gcc 7.4.0
* @author: luhao
* ***********************/

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
    int minDepth(TreeNode* root) {
        /*
        if(!root)
            return 0;
        int left=minDepth(root->left),right=minDepth(root->right);
        return (left && right) ? 1+min(left,right):1+left+right;
         */
        
        if (!root)
            return 0;
        if (root->left && root->right)
            return min(minDepth(root->left)+1,minDepth(root->right)+1);
        else 
            return minDepth(root->left) + minDepth(root->right) + 1;
    }
};
