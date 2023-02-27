class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;
        int sum1=0, sum2=0;
        leftSum.push_back(0);
        for(int i=0; i<nums.size() -1; i++) {
            sum1 += nums[i];
            leftSum.push_back(sum1);
        }

        rightSum.push_back(0);        
        for(int i=nums.size()-1; i>0; i--) {
            sum2 += nums[i];
            rightSum.push_back(sum2);
        }
        reverse(rightSum.begin(), rightSum.end());

        for(int i=0; i<nums.size(); i++) {
            leftSum[i] = abs(leftSum[i] - rightSum[i]);
        }
        return leftSum;
    }
};
