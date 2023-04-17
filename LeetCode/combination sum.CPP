class Solution {
public:

    void solve(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int> output, int index) {
        if(index>=candidates.size()) {
            if(target ==0) {
                ans.push_back(output);
            }
            return;
        }

        int num = candidates[index]; // get elements from array
        if(target>=num) {
            output.push_back(num); //push till target num se kam hai
            solve(candidates, target-num, ans, output, index); /*num daal rhe ho toh target kam krte jao. Index aage matt badhana kyuki ek hi element ko baar baar daal rhe */
            output.pop_back(); //wapas aate time hata do jo add kiya tha 
        }

        solve(candidates, target, ans, output, index+1); //next index wale element pe operate kro ab 
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(candidates, target, ans, output, index);
        return ans;
    }
};
