/*!***********************
* @brief:  leetcode-965-单值二叉树
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
    int first = true;
    int num;
    bool isUnivalTree(TreeNode* root) {
        if (!root)
            return 1;
        if (first) {
            num = root->val;
            first =  false;
        }
        else {
            if (root->val != num)
                return 0;
        }
        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
};
