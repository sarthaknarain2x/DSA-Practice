class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="", s2="";
        for(int i=0; i<word1.size(); i++) {
            s1 += word1[i];
        }

        for(int i=0; i<word2.size(); i++) {
            s2 += word2[i];
        }
        if(s1.length() != s2.length())
            return false;
        int i=0, j=0;
        while(i<s1.length() && j<s2.length()) {
            if(s1[i] != s2[j]) {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};
