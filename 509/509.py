# @brief:  leetcode-509-斐波那契数列
# @envir:  python 2.7
# @date:   2019/5/6
# @author: luhao

class Solution(object):
    def fib(self, N):
        """
        :type N: int
        :rtype: int
        """
        return N if N<2 else self.fib(N-1) + self.fib(N-2)
