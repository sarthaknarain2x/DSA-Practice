class Solution {
public:
    int countDigits(int n) {
        int c=0,d;
        while(n>0) {
            d = n%10;
            c++;
            n = n/10;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(auto itr: nums) {
            if(countDigits(itr) %2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};
