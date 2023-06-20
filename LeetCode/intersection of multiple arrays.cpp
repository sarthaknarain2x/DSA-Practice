class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map <int, int> mp;
        vector <int> arr;
        for(auto i:nums) {
            for(auto j:i) {
                mp[j]++;
                if(mp[j] == nums.size()) {
                    arr.push_back(j);
                }
            }
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};

