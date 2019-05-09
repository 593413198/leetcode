/*!***********************
 * @brief:  leetcode-167. 两数之和 II - 输入有序数组
 * @date:   2019/5/9
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        while (i<j){
            if (numbers[i] + numbers[j] == target){
                return vector<int>{i+1,j+1};
            }
            else if (numbers[i]+numbers[j] > target)
                j--;
            else
                i++;
                    
        }
        vector<int> a; //这里会因为没有return而编译报错，因此加上去；实际跑起来不会运行到这里的
        return a;
    }
};
