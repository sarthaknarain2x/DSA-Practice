class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(); 
        vector<vector<int>> ans;
        for(int i=0; i<n-2; i++) { // n-2 takk kyuki 2 element lene hai. agar last takk krenge traverse to lo hi pointers nhi nikal payenge
            if(i==0 || (i>0 && nums[i]!=nums[i-1])) { // if i=0 (first element). 
//nums[i] != nums[i-1], duplicate nhi lenge usi ki condition hai
                int lo=i+1, hi=n-1, sum = 0-nums[i]; // sum = -(nums[i]) c = -(a+b) 
                while(lo<hi) {
                    if(sum == nums[lo]+nums[hi]){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        ans.push_back(temp);
                        while(lo<hi && nums[lo]==nums[lo+1]) // if lo, next lo same
                            lo++; //skip lo as we dont want to consider duplicate
                        while(lo<hi && nums[hi]==nums[hi-1]) //// if hi, next hi  same
                            hi--; //skip hi as we dont want to consider duplicate
                        lo++; // duplicates ke next wale element ko consider karo 
                        hi--; // duplicates ke prev wale element ko consider karo
                    }
                    else if(sum < (nums[lo]+nums[hi]))
                        hi--; // if sum is less, hi pointer ko peeche lao
                    else
                        lo++; // is sum is greater, lo pointer ko aage lao
                }
            }
        }
        return ans;
    }
};
