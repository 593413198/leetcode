/*!***********************
 * @brief:  leetcode-371. 两整数之和
 * @date:   2019/5/9
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
public:
    int getSum(int a, int b) {
        if(a&b) return getSum(((a&b)<<1),a^b);  
        else return a|b;  
    }
};
