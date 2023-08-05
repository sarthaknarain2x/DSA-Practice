class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int reqFreq = nums.size()/2;
        int ans=0;
        unordered_map <int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto itr: mp) {
            if(itr.second == reqFreq) {
                ans = itr.first;
            }
        }
        return ans;
    }
};
