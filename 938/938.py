# @brief:  leetcode-938. 二叉搜索树的范围和
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
    def rangeSumBST(self, root, L, R):
        """
        :type root: TreeNode
        :type L: int
        :type R: int
        :rtype: int
        """
        if root:
            if root.val < L:
                return self.rangeSumBST(root.right,L,R)
            elif root.val > R:
                return self.rangeSumBST(root.left,L,R)
            else:
                return root.val + self.rangeSumBST(root.left,L,R) +  self.rangeSumBST(root.right,L,R)
        else:
            return 0
