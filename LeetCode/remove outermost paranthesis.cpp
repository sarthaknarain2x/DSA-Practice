class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        string ans = "";
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='(' && c==0) 
                c++;
            else if(s[i]=='(' && c>=1){
                ans += s[i];
                c++;
            }
            else if(s[i]==')' && c>1) {
                ans += s[i];
                c--;
            }
            else if(s[i]==')' && c==1)
                c--;
        }
        return ans;
    }
};
