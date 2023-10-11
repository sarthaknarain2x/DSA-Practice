class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n, ans=0;
        for(auto it: columnTitle) {
            n = it - 'A' + 1;
            ans = ans*26+n;
        }
        return ans;
    }
};
