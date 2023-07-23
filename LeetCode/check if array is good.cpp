class Solution {
public:
    bool isGood(vector<int>& nums) {
        int base = *max_element(nums.begin(), nums.end());
        int n = nums.size(), sum=0, add=0;
        if((base + 1) != n)
            return false;
        for(int i=0; i<n; i++) {
            sum += nums[i];
        }

        for(int i=1; i<=base; i++) {
            add += i;
        }
        add = add + base;

        return(add == sum);
    }
};
