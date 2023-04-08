class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans;
        for(int i=0; i<nums.size(); i++) {
            freq[nums[i]]++;
        }
        for(auto itr: freq) {
            if(itr.second==1) {
                ans = itr.first;
            }
        }
        return ans;
    }
};
