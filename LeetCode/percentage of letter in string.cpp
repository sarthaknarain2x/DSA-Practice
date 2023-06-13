class Solution {
public:
    int percentageLetter(string s, char letter) {
        int len = s.size(), c=0;
        for(int i=0; i<len; i++) {
            if(s[i] == letter) {
                c++;
            }
        }
        if(c==0)
            return 0;
        else {
            int ans = floor((c*100)/len);
            return ans;
        }
    }
};
