/*!***********************
 * @brief:  leetcode-258-各位相加
 * @date:   2019/5/7
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
public:
    int addDigits(int num) {
        while (num>9){
            int x = 0;
            while (num){
                x += num%10;
                num /= 10;
            }
            num = x;
        }
        return num;
    }
};
