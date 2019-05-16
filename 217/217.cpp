/*!***********************
 * @brief:  leetcode-217. 存在重复元素
 * @date:   2019/5/17
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i] == nums[i+1])
               return 1;
        }
        return 0;
    }
};
