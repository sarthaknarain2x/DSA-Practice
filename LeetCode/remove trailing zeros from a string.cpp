class Solution {
public:
    string removeTrailingZeros(string num) {
        int len = num.length(), c=0;
        string s="";
        for(int i=0; i<len; i++) {
            char ch = num[len-i-1];
            if(ch=='0') {
                c++;
            }
            else
                break;
        }
        for(int i=0; i<len-c; i++) {
            s += num[i];
        }
        return s;
    }
};
