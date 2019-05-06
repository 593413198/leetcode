/*!***********************
* @brief:  leetcode-728-自除数
* @date:   2019/5/6
* @envir:  gcc 7.4.0
* @author: luhao
* ***********************/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i=left; i<=right; i++){
            bool flag = 1;
            int x = i;
            while (x!=0){
                if (x%10==0 || i%(x%10)!=0){
                    flag = 0;
                    break;
                }
                x /= 10;
            }
            if (flag)
                ans.push_back(i);
        }
        return ans;
    }
};

