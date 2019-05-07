# @brief:  leetcode-700-二叉搜索树中的搜索
# @envir:  python 2.7
# @date:   2019/5/7
# @author: luhao

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def searchBST(self, root, val):
        """
        :type root: TreeNode
        :type val: int
        :rtype: TreeNode
        """
        p = root
        if root == None:
            return None
        if p.val == val:
            return p
        if val < p.val:
            return self.searchBST(p.left,val)
        else:
            return self.searchBST(p.right,val)
