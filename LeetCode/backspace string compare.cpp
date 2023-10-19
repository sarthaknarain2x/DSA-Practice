class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        string temp1="", temp2="";

        for(int i=0; i<s.length(); i++) {
            if(s[i] != '#') {
                s1.push(s[i]);
            }
            else if(!s1.empty() && s[i] == '#') {
                s1.pop();
            }
        }

        for(int i=0; i<t.length(); i++) {
            if(t[i] != '#') {
                s2.push(t[i]);
            }
            else if(!s2.empty() && t[i] == '#') {
                s2.pop();
            }
        }

        while(!s1.empty()) {
            temp1 += s1.top();
            s1.pop();
        }
        
        while(!s2.empty()) {
            temp2 += s2.top();
            s2.pop();
        }

        return (temp1==temp2);
    }
};
