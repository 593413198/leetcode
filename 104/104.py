# @brief:  leetcode-104-二叉树的最大深度
# @envir:  python 2.7
# @date:   2019/5/8
# @author: luhao

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def Max(self,a,b):
        return b if a<b else a
    
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root == None:
            return 0
        return self.Max(self.maxDepth(root.left)+1, self.maxDepth(root.right)+1)
