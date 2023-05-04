class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum=0;
        while(k--) {
            int last = nums[n-1];
            sum += last;
            nums.pop_back();
            nums.push_back(last+1);
        }
        return sum;
    }
};
