class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map <int, int> m;
        for(auto itr: nums) {
            if(itr>0) {
                m[itr]++;
            }
        }
        return m.size();
    }
};
