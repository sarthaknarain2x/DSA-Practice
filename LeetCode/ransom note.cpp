class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;

        for(auto it: magazine) {
            mp[it]++;
        }

        for(auto it: ransomNote) {
            if(!mp[it]) {
                return false;
            }
            mp[it]--;
        }
        return true;
    }
};
