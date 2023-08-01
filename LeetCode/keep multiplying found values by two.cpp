class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> set;
        int result = original;
        for (int i = 0; i < nums.size(); i++) {
            set.insert(nums[i]);
        }
        while (set.count(result)) {
            result = result * 2;
        }
        return result;
    }
};
