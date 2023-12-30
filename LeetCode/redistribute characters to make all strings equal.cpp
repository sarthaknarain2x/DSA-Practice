class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> mp;
        int n = words.size();
        for(int i=0; i<n; i++) {
            string s = words[i];
            for(char str: s) {
                mp[str] += 1;
            }
        }
        for(auto itr: mp) {
            if(itr.second % n != 0) {
                return false;
            }
        }
        return true;
    }
};
