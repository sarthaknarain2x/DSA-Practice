class Solution {
public:
    int countDigits(int num) {
        int temp = num, c=0, d;
        while(num!=0) {
            d = num%10;
            if(temp%d==0) {
                c++;
            }
            num = num/10;
        }
        return c;
    }
};
