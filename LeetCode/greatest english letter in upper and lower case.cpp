class Solution {
public:
    string greatestLetter(string s) {
        sort(s.begin(), s.end());
        int idx, ans = INT_MIN;
        for(int i=0; i<s.length(); i++) {
            if((int)s[i] >=97) {
                idx=i;
                break;
            }
        }

        int i=0;
        string res= "";
        while(idx<s.length()) {
            if(s[idx] - s[i] == 32) {
                ans = max(ans, i);
                res = s[ans];
                idx++;
                i++;
            }
            else if(s[idx] - s[i] < 32) {
                idx++;
            }
            else {
                i++;
            }
        }
        return res;
    }
};
