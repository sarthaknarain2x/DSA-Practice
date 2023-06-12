class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        string s="";
        vector<string> ans;
        for(int i=0; i<nums.size(); i++) {
            int j=i;
            while(j+1<nums.size() && nums[j] + 1 ==nums[j+1]) {
                j++;
            }
            if(j>i) {
                s += to_string(nums[i]);
                s += "->";
                s += to_string(nums[j]);
            } 
            else {
                s += to_string(nums[i]);
            }
            ans.push_back(s);
            s="";
            i=j;
        }
        return ans;
    }
};
