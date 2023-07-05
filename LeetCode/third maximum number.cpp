class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        for(auto num: nums)
            s.insert(num);
        if(s.size() < 3) {
            return *max_element(s.begin(),s.end());
        }
        return *next(s.begin(), s.size() - 3);
    }
};
