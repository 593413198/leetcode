/*!***********************
* @brief:  leetcode-700-二叉搜索树中的搜索
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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* p = root;
        if (p==NULL){
            return NULL;
        }
        if (p->val == val)
            return p;
        if (val < p->val)
            return searchBST(p->left,val);
        else
            return searchBST(p->right,val);
    }
};
