class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi=0;
        for(auto s: strs) {
            int len=0;
            for(auto it: s) {
                if(isalpha(it)) {
                    len = s.length();
                    break;
                }
                len = len*10 + (it-'0');
            }
            maxi = max(maxi, len);
        }
        return maxi;
    }
};
