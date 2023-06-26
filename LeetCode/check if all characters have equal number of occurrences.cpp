class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map <char, int> mp;
        int len = s.length();

        for(int i=0; i<len; i++) {
            mp[s[i]]++;
        }

        int cnt = mp[s[0]];
        for(auto itr: mp) {
            if(itr.second != cnt)
                return false;
        }
        return true;
    }
};
