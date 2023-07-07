class Solution {
public:
    bool isPalindrome(string s) {
        string temp = s;
        reverse(s.begin(), s.end());
        return (temp==s);
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++) {
            if(isPalindrome(words[i]) == true) {
                return words[i];
            }
        }
        return "";
    }
};
