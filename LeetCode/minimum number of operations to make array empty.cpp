class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int op=0;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto it: mp) {
            if(it.second == 1) {
                return -1;
            }
            if(it.second%3 == 0) {
                op+=it.second/3;
            }
            else if(it.second%3 == 1) {
                op+=(it.second/3-1) + 2;
            }
            else if(it.second%3 == 2) {
                op+=it.second/3 + 1;
            }
        }
        return op;
    }
};
