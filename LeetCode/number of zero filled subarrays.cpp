class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long subArray = 0, ans = 0;
        for(long long i=0; i<nums.size(); i++) {
            if(nums[i]==0) {
                subArray++;
                ans = ans + subArray;
            }
            else {
                subArray = 0;
            }
        }
        return ans;
    }
};
