/*!***********************
* @brief:  leetcode-701-二叉搜索树中的插入操作
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *p = root;
        TreeNode *z = NULL;
        while (p!=NULL){
            z = p;
            if (val<p->val)
                p = p->left;
            else
                p = p->right;
        }
        if (val < z->val) //插在z左边
            z->left = new TreeNode(val);
        else //插在z右边
            z->right = new TreeNode(val);
        return root;
    }
};
