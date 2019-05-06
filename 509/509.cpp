/*!***********************
 * @brief:  leetcode-509-斐波那契数列
 * @date:   2019/5/6
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
public:
    int fib(int N) {
        return (N<2) ? N : ( fib(N-1) + fib(N-2) ) ;
    }
};
