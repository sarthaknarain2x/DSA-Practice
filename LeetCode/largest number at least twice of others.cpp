class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector <int> temp = nums;
        sort(temp.begin(), temp.end());
        int largest = temp[nums.size()-1];
        if(largest < 2*temp[nums.size()-2]) {
            return -1;
        }
        else if(largest >= temp[nums.size()-2]) {
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] == largest) {
                    return i;
                }
            }
        }
        return -1;
    }
};
