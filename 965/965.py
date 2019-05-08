# @brief:  leetcode-965-单值二叉树
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
    def __init__(self):
        self.num = 0
        self.first = True
        
    def isUnivalTree(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if not root:
            return True
        if self.first:
            self.num = root.val
            self.first = False
        else:
            if self.num != root.val:
                return False
        return self.isUnivalTree(root.left) and self.isUnivalTree(root.right)
