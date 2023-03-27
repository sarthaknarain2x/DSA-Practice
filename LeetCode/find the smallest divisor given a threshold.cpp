class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = nums[0];
        for(int i=1; i<nums.size(); i++) {
            maxi = max(maxi, nums[i]);
        }
        int left = 1, right = maxi, m, sum;
        while (left < right) {
            m = (left + right) / 2, sum = 0;
            for (int i : nums)
                sum +=  ((i-1)/m) + 1;
            if (sum > threshold)
                left = m + 1;
            else
                right = m;
        }
        return left;
    }
};
