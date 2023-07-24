class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int c=1, ans=1;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i] < nums[i+1]) {
                c++;
                ans = max(ans, c);
            }
            else
                c=1;
        }
        return ans;
    }
};
