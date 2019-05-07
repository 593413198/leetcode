/*!***********************
* @brief:  leetcode-136-只出现一次的数字
* @date:   2019/5/7
* @envir:  gcc 7.4.0
* @author: luhao
* ***********************/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i=0; i<nums.size(); i++){
                ans ^= nums[i];
        }
        return ans;
    }
};

