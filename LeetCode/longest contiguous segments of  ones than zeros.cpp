class Solution {
public:
    bool checkZeroOnes(string s) {

        if(s.length()==1) {
            return s[0] == '1';
        }
        int zeroLen=0, oneLen=0, maxiOne=0, maxiZero=0;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '1') {
                oneLen++;
                zeroLen=0;
            }
            else if(s[i]=='0') {
                oneLen=0;
                zeroLen++;
            }
            maxiOne = max(maxiOne, oneLen);
            maxiZero = max(maxiZero, zeroLen);
        }
        return (maxiOne>maxiZero);
    }
};
