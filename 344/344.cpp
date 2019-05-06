/*!***********************
 * @brief:  leetcode-344-反转字符串
 * @date:   2019/5/6
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int m = 0;
	    int n = s.size()-1;
    	while (m < n)
	    	swap(s[m++], s[n--]);
    }
};
