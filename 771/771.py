# @brief:  leetcode-771-宝石与石头
# @envir:  python 2.7
# @date:   2019/5/5
# @author: luhao

class Solution(object):
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        return sum(S.count(i) for i in J) 
