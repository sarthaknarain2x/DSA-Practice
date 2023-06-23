class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans;
        set <int> mp1;
        set <int> mp2;
        mp1.insert(nums.begin(), nums.end());
        for(int i=1; i<=n; i++) {
            mp2.insert(i);
        }
        for(auto itr: mp2) {
            if(mp1.find(itr) == mp1.end()) {
                ans.push_back(itr);
            }
        }

        return ans;
    }
};
