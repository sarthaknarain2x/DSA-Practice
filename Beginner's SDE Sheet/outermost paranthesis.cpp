class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string ans = "";
        stack <char> stk;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(' && stk.empty()) 
                stk.push(s[i]);
            else if(s[i] == '(') {
                ans += "(";
                stk.push(s[i]);
            }
            else if(s[i] == ')') {
                stk.pop();
                if(stk.size() > 0)
                    ans += ")";
            }
        }
        return ans;
    }
};
