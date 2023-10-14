class Solution {
public:
    bool isVowel(char x) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o'||x == 'u' 
        || x == 'A'||x == 'E'||x == 'I'||x == 'O'||x == 'U') {
            return true;
        }
        return false; 
    }
    string reverseVowels(string s) {
        int n = s.length();
        int i=0, j=n-1;

        while(i<j) {
            if(isVowel(s[i]) && isVowel(s[j])) {
                swap(s[i++], s[j--]);
            }
            else if(isVowel(s[i])) {
                j--;
            }
            else if(isVowel(s[j])) {
                i++;
            }
            else {
                i++;
                j--;
            }
        }
        return s;
    }
};
