class Solution {
public:
    bool checkRecord(string s) {
        int c=0, late=0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'A') {
                c++;
                if(c>=2) {
                    return false;
                }
            }
            if(s[i]=='L') {
                late++;
            }
            else if(s[i]!='L') 
                late = 0;
            if(late>=3) {
                return false;
            }
        }
        return true;
    }
};
