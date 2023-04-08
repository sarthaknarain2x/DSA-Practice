class Solution {
public:
    int addDigits(int num) {
        while(true) {
            if(num<=9)
                break;
            int sum=0;
            while(num>0) {
                int d = num%10;
                sum += d;
                num = num/10;
            }
            num = sum;
        }
        return num;
    }
};
