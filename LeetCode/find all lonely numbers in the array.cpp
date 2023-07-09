class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        vector <int> ans;
        
        int n = nums.size();
        unordered_map <int, int> mp;
        
        for(int i=0; i<n; i++) {
            mp[nums[i]]++;
        }
        
        for(int i=0; i<n; i++) {
            int x = nums[i];
            int y = x+1;
            int z = x-1;
            
            if(mp[x] == 1 && mp[y] == 0 && mp[z] == 0) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};  
