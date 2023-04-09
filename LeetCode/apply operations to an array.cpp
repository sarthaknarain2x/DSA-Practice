class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> nor(nums.size());
        int c=0;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]==nums[i+1]) {
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
            }
        }
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=0) {
                nor[c] = nums[i];
                c++;
            }
        }

        for(int i=c; i<nums.size(); i++) {
            nor[i] = 0;
        }
        return nor;
    }
};
