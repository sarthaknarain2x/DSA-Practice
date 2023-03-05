class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        sort(begin(strs), end(strs));
        string a = strs[0];
        string b = strs[len-1];
        string ans = "";
        for(int i=0; i<a.size(); i++) {
            if(a[i]==b[i])
                ans += a[i];
            else
                break;
        }
        return ans;
    }
};
