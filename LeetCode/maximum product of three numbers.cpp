class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int firstMaxi = nums[n-1];
        int secondMaxi = nums[n-2];
        int thirdMaxi = nums[n-3];

        int mini = nums[0];
        int secondMin = nums[1];
        
        int comp1 = firstMaxi*secondMaxi*thirdMaxi;
        int comp2 = firstMaxi*mini*secondMin;
        return max(comp1, comp2);
    }
};
