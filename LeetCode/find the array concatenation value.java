class Solution {
    public long findTheArrayConcVal(int[] nums) {
    int i = 0;
    int j = nums.length-1;
    String str = "";
    long ans = 0;
    while(i<j) {
        str = String.valueOf(nums[i]) + String.valueOf(nums[j]);
        i++;
        j--;
        ans += Long.valueOf(str);
    }
    if(nums.length%2 == 1) 
        ans += nums[i];
    return ans;
    }
}
