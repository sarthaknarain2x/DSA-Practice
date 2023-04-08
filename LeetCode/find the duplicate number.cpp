class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int xoro, ans;
    for(int i=0; i<nums.size()-1; i++) {
        xoro = nums[i] ^ nums[i+1];
        if(xoro == 0) {
            ans = nums[i];
            break;
        }
    }
    return ans;
    }
};
