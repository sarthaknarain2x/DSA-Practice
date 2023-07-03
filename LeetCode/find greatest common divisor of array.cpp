class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi = INT_MIN;
        int s = nums[0];
        int l = nums[nums.size()-1];
        
        for(int i=1; i<=l; i++) {
            if(s%i==0 && l%i==0) {
                maxi = max(maxi, i);
            }
        }
        return maxi;
    }
};
