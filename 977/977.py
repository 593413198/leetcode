# @brief:  leetcode-977-有序数组的平方
# @envir:  python 2.7
# @date:   2019/5/6
# @author: luhao

class Solution(object):
    def sortedSquares(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        return sorted( [i*i for i in A] )
