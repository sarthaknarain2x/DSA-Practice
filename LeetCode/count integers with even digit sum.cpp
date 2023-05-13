class Solution {
public:
    int getDigitsSum(int num) {
        int d, sum=0;
        while(num>0) {
            d = num%10;
            sum += d;
            num = num/10;
        }
        return sum;
    }
    int countEven(int num) {
        int c=0;
        for(int i=2; i<=num; i++) {
            if(getDigitsSum(i) %2 == 0) {
                c++;
            }
        }
        return c;
    }
};
