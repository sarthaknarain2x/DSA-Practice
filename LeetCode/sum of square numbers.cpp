class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0, j=sqrt(c);
        while(i<=j) {
            long long int sum = pow(i,2) + pow(j,2);
            if(sum == c) {
                return true;
            }
            else if(sum < c) {
                i++;
            }
            else
                j--;
        }
        return false;
    }
};
