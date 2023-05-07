class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            int biggest = nums[nums.size()-i-1];
            int lo = 0, hi = nums.size()-1, mid;
            while(lo <= hi) {
                mid = lo + (hi-lo)/2;
                if(nums[mid] == -(biggest)) 
                    return biggest;
                else if(nums[mid] < -(biggest))
                    lo = mid+1;
                else 
                    hi = mid-1;
            }
        }
        return -1;
    }
};
