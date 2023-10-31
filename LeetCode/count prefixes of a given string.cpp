class Solution {
public:
    bool isPrefix(string w, string s) {
        if(w.length() > s.length())
            return false;
        for(int i=0; i<w.length(); i++) {
            if(s[i] != w[i])
                return false;
        }
        return true;
    }
    int countPrefixes(vector<string>& words, string s) {
        int c=0;
        for(int i=0; i<words.size(); i++) {
            if(isPrefix(words[i], s)) {
                c++;
            }
        }
        return c;
    }
};
