class Solution {
public:
    string thousandSeparator(int n) {
        if(n<1000)
            return to_string(n);
        string ans="";
        int c=0;
        string num = to_string(n);
        int len = num.size();

        for(int i=len-1; i>=0; i--) {
            if(c==3) {
                ans = '.' + ans;
                c=0;
            }
            c++;
            ans = num[i] + ans;
        }
        return ans;
    }
};
