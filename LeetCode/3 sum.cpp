class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(); 
        vector<vector<int>> ans;
        for(int i=0; i<n-2; i++) {
            if(i==0 || (i>0 && nums[i]!=nums[i-1])) {
                int lo=i+1, hi=n-1, sum = 0-nums[i];
                while(lo<hi) {
                    if(sum == nums[lo]+nums[hi]){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        ans.push_back(temp);
                        while(lo<hi && nums[lo]==nums[lo+1])
                            lo++;
                        while(lo<hi && nums[hi]==nums[hi-1])
                            hi--;
                        lo++;
                        hi--;
                    }
                    else if(sum < (nums[lo]+nums[hi]))
                        hi--;
                    else
                        lo++;
                }
            }
        }
        return ans;
    }
};
