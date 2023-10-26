class Solution {
public:
    int longestContinuousSubstring(string s) {
        int c=1, maxi=INT_MIN;
        if(s.length() == 1)
            return 1;
        for(int i=1; i<s.length(); i++) {
            if(((s[i] - 'a') - (s[i-1] - 'a')) == 1) {
                c++;
            }
            else {
                c=1;
            }
            maxi = max(c, maxi);
        }
        return maxi;
    }
};
