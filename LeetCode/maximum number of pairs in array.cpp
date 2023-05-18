class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int c=0;
        for(int i=0; i<n-1; i++) {
            if(nums[i] == nums[i+1]) {
                c++;
                nums[i+1] = -1;
                nums[i] = -1;
            }
        }
        return {c, n-2*c};
    }
};
