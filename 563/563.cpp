/*!***********************
 * @brief:  leetcode-563. 二叉树的坡度
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
    int ans=0;
    int sumNode(TreeNode* root) {
        if (!root)
            return 0;
        int left = sumNode(root->left);
        int right = sumNode(root->right);
        ans += (right>left)?right-left:left-right;
        return root->val + left + right;
    }
    
    int findTilt(TreeNode* root) {
        if (!root)
            return 0;
        sumNode(root);
        return ans;
    }
};
