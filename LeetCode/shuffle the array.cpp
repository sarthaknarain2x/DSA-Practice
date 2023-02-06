class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i=0, j=n, counter=0;
        while(counter<(n*2)) {
            if(counter % 2==0) {
                ans.push_back(nums[i++]);
            }
            else{
                ans.push_back(nums[j++]);
            }
            counter++;
        }
        return ans;
    }
};
