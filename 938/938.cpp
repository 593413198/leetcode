/*!***********************
 * @brief:  leetcode-938. 二叉搜索树的范围和
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
    int ans = 0;
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (root){
            if (root->val>=L && root->val<=R){
                ans += root->val;
            }
            rangeSumBST(root->left,L,R);
            rangeSumBST(root->right,L,R);
            return ans;
        }
        return 0;
    }
};
