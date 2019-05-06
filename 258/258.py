# @brief:  leetcode-258-各位相加
# @envir:  python 2.7
# @date:   2019/5/7
# @author: luhao

class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        while num>9:
            x = 0
            while num:
                x += num % 10
                num /= 10
            num = x
        return num
        
