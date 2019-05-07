# @brief:  leetcode-136-只出现一次的数字
# @envir:  python 2.7
# @date:   2019/5/7
# @author: luhao

class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = 0
        for i in nums:
	        ans ^= i
        return ans
        
