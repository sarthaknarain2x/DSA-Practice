class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool ans1 = true, ans2 = true;
        int i=0, j;
        for(j=1; j<nums.size(); j++) {
            if(nums[i] <= nums[j]) {
                i=i+1;
                continue;
            }
            else {
                ans1 = false;
                break;
            }
        }

        int x=0, y;
        for(y=1; y<nums.size(); y++) {
            if(nums[x] >= nums[y]) {
                x=x+1;
                continue;
            }
            else {
                ans2 = false;
                break;
            }
        }

        if(ans1 == true || ans2 == true)
            return true;
        return false;
    }
};
