/*!*****************
 * @brief:  leetcode-977-有序数组的平方
 * @enviro: gcc 7.4.0
 * @date:   2019/5/6
 * @author: luhao
 * *****************/

class Solution {
public:
    int abs(int x){
        return (x>=0)?x:(-x);
    }      
    
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ans(A.size());
        int i=0, j=A.size()-1;
        int index = j;
        while (index>=0){
            if (abs(A[i]) >= abs(A[j]) ){
                ans[index] = A[i]*A[i];
                i++;
                index--;
            }
            else {
                ans[index] = A[j]*A[j];
                j--;
                index--;
            } 
        }
        return ans;
    }
};
