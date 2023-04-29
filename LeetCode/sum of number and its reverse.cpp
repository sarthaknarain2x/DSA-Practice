class Solution {
public:
    int getReverse(int n) {
        int d, rev=0;
        while(n>0) {
            d = n%10;
            rev = rev*10+d;
            n=n/10;
        }
        return rev;
    }
    bool sumOfNumberAndReverse(int num) {
        if(num==0)
            return true;
        for(int i=1; i<=50000; i++) {
            if(i+getReverse(i)==num) 
                return true;
        }
        return false;
    }
};
