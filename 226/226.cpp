/*!***********************
 * @brief:  leetcode-226. 翻转二叉树
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
    TreeNode* invertTree(TreeNode* root) {
        if (root) {
            TreeNode *tmp = root->left;
            root->left = root->right;
            root->right = tmp;
            invertTree(root->right);
            invertTree(root->left);
        }
        return root;
    }
};
