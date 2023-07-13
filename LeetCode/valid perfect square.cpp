class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo = 1, hi = num, mid;
        while(lo <= hi) {
            mid  = lo + (hi-lo)/2;
            if(pow(mid,2) == num) {
                return true;
            }
            else if(pow(mid,2) < num) {
                lo = mid+1;
            }
            else
                hi = mid-1;
        }
        return false;
    }
};
