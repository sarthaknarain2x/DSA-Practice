class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map <int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        int ans = -1, maxi = INT_MIN;
        for(auto itr: mp) {
            if(itr.first%2==0 && itr.second > maxi) {
                ans = itr.first;
                maxi = itr.second;
            }
        }
        return ans;
    }
};
