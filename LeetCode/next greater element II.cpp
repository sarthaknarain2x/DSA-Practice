class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1); // initialising it with -1 
        stack<int> s;
        // basically a copy of nums array, without creating a copy 
        for(int i=2*n-1; i>=0; i--) {
            // i%n is essential for circular array
            while(!s.empty() && s.top() <= nums[i%n]) { 
                s.pop(); // pop all the elements smaller than current nums[i%n]
            }
            // beyond the first half (till n) we dont need NGE hence i<n
            if(i<n) {
                if(!s.empty()) {
                    ans[i] = s.top(); // insert the top most element 
                }
            }
            // i%n -> reason same as before
            s.push(nums[i%n]);
        }
        return ans;
    }
};
