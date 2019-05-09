# @brief:  leetcode-167. 两数之和 II - 输入有序数组
# @envir:  python 2.7
# @date:   2019/5/9
# @author: luhao

class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        i = 0
        j = len(numbers)-1
        while (i<j):
            if numbers[i] + numbers[j] == target:
                return [i+1,j+1]
            elif numbers[i]+numbers[j] > target:
                j-=1
            else:
                i+=1
        
