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

/*0ms Solution->
If number is divisible by 9 completely then digital root(ans) is 9,else the digital root is remainder obtained.
class Solution {
public:
    int addDigits(int num) {
        int ans;
        if(num<9)
            return num;
        if(num%9==0)
            ans = 9;
        else
            ans = num%9;
        return ans;
    }
};
*/
