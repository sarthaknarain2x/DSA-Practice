class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map <int, int> mp;
        int sum=0;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto &itr: mp) {
            if(itr.second == 1) {
                sum += itr.first;
            } 
        }
        return sum;
    }
};
