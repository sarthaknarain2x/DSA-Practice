class Solution {
public:
    int arrangeCoins(int n) {
        int c=0, i=1;
        while(i<=n) {
            c++;
            n = n-i;
            i++;
        }
        return c;
    }
};
