class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;

        for(auto itr: nums1) {
            nums.push_back(itr);
        }

        for(auto itr: nums2) {
            nums.push_back(itr);
        }
        sort(nums.begin(), nums.end());
        int len = nums.size();

        if(len%2 != 0) {
            return nums[(len/2)];
        }
        else {
            return (nums[(len/2)-1] + nums[len/2])/2.0;
        }
        return 0.0;
    }
};
