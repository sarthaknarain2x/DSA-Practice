class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i,j;
        // lineraly traverse the arr from backwards from second last ele 
    //finding the break point where ith element is smaller than (i+1)th element
        for(i=n-2; i>=0; i--) {
            if(nums[i] < nums[i+1])
                break;
        }
        /* if there is no break point we simply reverse the arr, thats the ans
        example->  5,4,3,2,1 next permutation is 1,2,3,4,5*/
        if(i<0)
            reverse(nums.begin(), nums.end());
        else{
            /*Linearly traverse array from backward. Find an index that has a value greater than the previously found index.*/
            for(j=n-1; j>i;j--) {
                if(nums[j] > nums[i])
                    break;
            }
            /*Swap values present in indices found in the above two steps*/
            swap(nums[i], nums[j]);
            //Reverse array from index+1 where the index is found at step 1 till the end of the array
            reverse(nums.begin()+i+1, nums.end());
        }
    }
};
