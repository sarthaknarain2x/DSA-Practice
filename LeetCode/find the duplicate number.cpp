// better binary search solution
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int lo = 0, hi = nums.size()-1, cnt=0, mid;
        while(lo<=hi) {
            cnt=0;
            mid = lo+(hi-lo)/2;
            for(int n: nums) {
                if(n<=mid) {
                    cnt++;
                }
            }
            if(cnt<=mid) {
                lo = mid+1;
            }
            else {
                hi = mid-1;
            }
        }
        return lo;
    }
};
// XOR soln
/*class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int xoro, ans;
    for(int i=0; i<nums.size()-1; i++) {
        xoro = nums[i] ^ nums[i+1];
        if(xoro == 0) {
            ans = nums[i];
            break;
        }
    }
    return ans;
    }
};
*/
