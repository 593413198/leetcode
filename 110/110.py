# @brief:  leetcode-110. 平衡二叉树
# @envir:  python 2.7
# @date:   2019/5/11
# @author: luhao

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def depth(self,root): # 返回树的深度
        if not root:
            return 0
        return max( [ self.depth(root.left), self.depth(root.right) ] )+1
    
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if not root:
            return True
        if abs(self.depth(root.left)-self.depth(root.right))>1:
            return False
        return self.isBalanced(root.left) and self.isBalanced(root.right)
