# @brief:  leetcode-701-二叉搜索树中的插入操作
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
    def insertIntoBST(self, root, val):
        """
        :type root: TreeNode
        :type val: int
        :rtype: TreeNode
        """
        p = root
        x = None
        while p!=None:
            x = p
            if val < p.val:
                p = p.left
            else:
                p = p.right
        
        if val < x.val:
            x.left = TreeNode(val)
        else:
            x.right = TreeNode(val)
        return root
        
