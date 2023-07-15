class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int x=0, y=1;
        vector<int> ans(nums.size());
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                ans[x] = nums[i];
                x = x+2;
            }
            else {
                ans[y] = nums[i];
                y = y+2;
            }
        }
        return ans;
    }
};
