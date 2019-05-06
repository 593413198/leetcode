# @brief:  leetcode-728-自除数
# @envir:  python 2.7
# @date:   2019/5/6
# @author: luhao

class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        ans = []
        for i in range(left,right+1):
            x = i
            flag = True
            while x!=0:
                if x%10 == 0 or i % (x%10)!=0:
                    flag = False
                    break
                x /= 10
            if flag:
                ans.append(i)
        return ans
