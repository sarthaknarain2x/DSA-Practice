class Solution {
public:
    int getReverse(int n) {
        int rev = 0, d;
        while(n>0) {
            d = n%10;
            rev = rev*10+d;
            n=n/10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int rev1 = getReverse(num);
        int rev2 = getReverse(rev1);

        return rev2 == num;
    }
};
