class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int i=0, j=0, ans=0;
        while(j<s.length()) {
            mp[s[j]]++; // increase frequency
            if(mp.size()== j-i+1) // this means we have all characters unique
                ans = max(ans, j-i+1);
            else if(mp.size() < j-i+1) { // duplicates present
                while(mp.size() < j-i+1) { // till duplicates aren't removed
                    mp[s[i]]--; // remove duplicates
                    if(mp[s[i]]==0) // if freq becomes 0 delete entirely
                        mp.erase(s[i]);
                    i++;
                }
            }
            j++; 
        }
        return ans;
    }
};
