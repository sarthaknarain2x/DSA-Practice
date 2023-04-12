class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char ans;
        for(int j=0; j<t.length(); j++) {
            if(s[j] != t[j]) {
                ans = t[j];
                break;
            }
        }
        return ans;
    }
};
