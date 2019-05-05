/*!***********************
 * @brief:  leetcode-771-宝石与石头
 * @date:   2019/5/1
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
	public:
		int numJewelsInStones(string J, string S) {
			int ans = 0;
			for (int i=0; i<J.length(); i++){
				for (int j=0; j<S.length(); j++){
					if (J[i]==S[j])	
						ans ++;	
				}
			}
			return ans;             
		}
};

