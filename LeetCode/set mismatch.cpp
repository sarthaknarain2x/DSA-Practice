class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map <int, int> mp;
        int sum=0, arrSum=0, dup;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
            arrSum += nums[i];
        }

        for(auto itr: mp) {
            if(itr.second > 1) {
                dup = itr.first;
            }
        }

        for(int i=1; i<=nums.size(); i++) {
            sum += i;
        }

        int realSum = arrSum - dup;
        int missing = sum - realSum;

        return {dup, missing};
    }
};
