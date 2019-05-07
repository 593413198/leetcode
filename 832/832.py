# @brief:  leetcode-832-翻转图像
# @envir:  python 2.7
# @date:   2019/5/7
# @author: luhao

class Solution(object):
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        return [[j ^ 1 for j in i[::-1]] for i in A]
