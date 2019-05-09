/*!***********************
 * @brief:  leetcode-1-两数之和
 * @date:   2019/5/9
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = nums.size();
        for (int i=0; i<l-1; i++){
            for (int j=i+1; j<l; j++){
                if (nums[i]+nums[j]==target){
                    return vector<int>{i,j};
                }       
            }         
        }
        return vector<int>{};
    }
};
