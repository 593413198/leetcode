# @brief:  leetcode-371. 两整数之和
# @envir:  python 2.7
# @date:   2019/5/9
# @author: luhao

class Solution(object):
    def getSum(self, a, b):
        """
        :type a: int
        :type b: int
        :rtype: int
        """
        return self.getSum(a^b,((a&b)<<1)) if a&b else a|b
        
