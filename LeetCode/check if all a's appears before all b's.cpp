class Solution {
public:
    bool checkString(string s) {
        int i=0, j=s.length()-1;
        while(i<j) {
            if(s[i] == 'b' && s[j] == 'a') {
                return false;
            }
            else if(s[i] == 'a') {
                i++;
            }
            else if(s[j] == 'b') {
                j--;
            }
        }
        return true;
    }
};
