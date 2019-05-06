/*!***********************
 * @brief:  leetcode-349-两个数组的交集
 * @date:   2019/5/7
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        vector<int> Ans;
        int len1 = nums1.size();
        int len2 = nums2.size();
        for (int i=0; i<len1; i++){
            for (int j=0; j<len2; j++){
                if (nums1[i]==nums2[j]){
                    ans.insert(nums1[i]);
                    break;
                }
            }
        }
        for (auto num: ans)
            Ans.push_back(num);
        return Ans;
    }
};
