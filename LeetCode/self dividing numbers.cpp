class Solution {
public:
    bool canDivide(int n) {
        int d=0, sum=0;
        int temp=n;
        while(n!=0) {
            d = n%10;
            if(d==0)
                return false;
            if(d!=0)
                sum += temp%d;
            n = n/10;
        }
        return sum==0;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++) {
            if (canDivide(i) == true)
                ans.push_back(i);
        }
        return ans;
    }
};
