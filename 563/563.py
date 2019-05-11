# @brief:  leetcode-563. 二叉树的坡度
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
    def __init__(self):
        self.ans = 0
        
    def sumNode(self, root):
        # 计算子树的节点之和
        if not root:
            return 0
        left = self.sumNode(root.left)
        right = self.sumNode(root.right)
        self.ans += abs(left-right)
        return root.val + left + right
    
    
    def findTilt(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.sumNode(root)
        return self.ans
