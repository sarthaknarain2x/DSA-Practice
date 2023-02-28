class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // get a min heap
        priority_queue <int, vector<int>, greater<int>> minh;
        
        for(int i=0; i<nums.size(); i++) {
            minh.push(nums[i]); // push all elements in the min heap

            if(minh.size() > k) // if size of min heap becomes greater than k
                minh.pop(); // pop the top of minh
        }
        return minh.top(); // kth largest will be at top of minh
    }
};
