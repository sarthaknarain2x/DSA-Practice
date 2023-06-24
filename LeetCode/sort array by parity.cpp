class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> even;
        vector<int> odd;
        vector <int> ans;
        if(nums.size() == 1)
            return nums;
        for(auto itr: nums) {
            if(itr%2 == 0) {
                even.push_back(itr);
            }
            else {
                odd.push_back(itr);
            }
        }
        for(auto x: even)
            ans.push_back(x);
        for(auto y: odd)
            ans.push_back(y);
        return ans;   
    }
};
