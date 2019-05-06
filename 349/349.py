# @brief:  leetcode-349-两个数组的交集
# @envir:  python 2.7
# @date:   2019/5/7
# @author: luhao

class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        return set(nums1) & set(nums2)

