/*!***********************
* @brief:  leetcode-104-二叉树的最大深度
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
    int maxDepth(TreeNode* root) {
         if (root == NULL)
             return 0;
        return max( maxDepth(root->left)+1, maxDepth(root->right)+1 );
    }
};
