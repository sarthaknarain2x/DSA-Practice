class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> se(s.begin(), s.end());
        return se.size();
    }
};
