/*!***********************
 * @brief:  leetcode-832-翻转图像
 * @date:   2019/5/7
 * @envir:  gcc 7.4.0
 * @author: luhao
 * ***********************/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n = A.size();
        int m = A[0].size();
        for (int i=0; i<n; i++){
            for (int j=0; j<m/2; j++){
                if (A[i][j]==A[i][m-1-j]){
                    A[i][j] = A[i][m-1-j] = 1-A[i][j];
                }
            }
            if (m%2==1)
                A[i][m/2] ^= 1;
        }
        return A;
    }
};
