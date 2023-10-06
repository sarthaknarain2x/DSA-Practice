class Solution {
public:
    int integerBreak(int n) {
        if(n==2 || n==3)
            return n-1;
        int total=1;
        while(n>4) {
            n = n-3;
            total = total*3;
        }
        if(n>0) {
            n = n*total;
        }
        return n;
    }
};
