# @brief:  leetcode-111-二叉树的最小深度
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
    def Min(self,a,b):
        return a if a<b else b
    
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # 特殊情况是只有2个节点的时候,此时最小深度应该是1
        # 因为根节点不能算是一个叶子节点
        if root == None:
            return 0
        if root.left and root.right:
            return self.Min(self.minDepth(root.left)+1,self.minDepth(root.right)+1)
        elif root.left:
            return self.minDepth(root.left)+1
        elif root.right:
            return self.minDepth(root.right)+1
        else:
            return 1
