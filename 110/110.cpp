/*!***********************
 * @brief:  leetcode-110. 平衡二叉树
 * @date:   2019/5/11
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
    int depth(TreeNode *root){
        if (!root)
            return 0;
        return max(depth(root->left),depth(root->right))+1;
    }
    
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;
        int x = depth(root->left)-depth(root->right);
        if (x>1 || x<-1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
