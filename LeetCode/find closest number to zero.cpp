class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int diff = INT_MAX, ans=0;
        for(int i=0; i<nums.size(); i++) {
            if(abs(nums[i]) < diff) {
                diff = abs(nums[i]);
                ans = nums[i];
            }
            else if(abs(nums[i]) == diff && nums[i] > ans) {
                ans = nums[i];
            }
        }
        return ans;
    }
};
