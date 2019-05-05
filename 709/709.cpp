/*!***********************
* @brief:  leetcode-771-宝石与石头
* @date:   2019/5/1
* @envir:  gcc 7.4.0
* @author: luhao
* ***********************/

class Solution {
	public:
		string toLowerCase(string str) {
		for (int i=0; i<str.length(); i++){
			if (str[i]>='A' && str[i]<='Z')
				str[i] += 32; //大写字母的ascii码比小写字母大32
		}
		return str;
}
};
