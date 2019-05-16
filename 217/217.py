# @brief:  leetcode-217. 存在重复元素
# @envir:  python 2.7
# @date:   2019/5/17
# @author: luhao

class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        return len(set(nums))!=len(nums)
    
