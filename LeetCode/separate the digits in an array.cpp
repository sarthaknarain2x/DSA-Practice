class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int no, d;
        vector<int> arr;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            no = nums[i];
            while(no!=0) {
                d = no%10;
                arr.push_back(d);
                no = no/10;
            }
            reverse(arr.begin(), arr.end());
            for(auto j: arr) {
                ans.push_back(j);
            }
            arr.clear();
        }
        return ans;
    }
};
