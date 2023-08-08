class Solution {
public:
    string finalString(string s) {
        int len = s.length();
        string str="";
        for(int i=0; i<len; i++) {
            if(s[i] != 'i') {
                str = str + s[i];
            }
            else {
                reverse(str.begin(), str.end());
            }
        }
        return str;
    }
};
