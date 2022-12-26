class Solution {
public:
    int mySqrt(int x) {
        int lo=1, hi = x;
        int ans=0;

        while(lo<=hi){
            long long int mid = lo + (hi-lo)/2;
            if(mid*mid <=x){
                ans = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            } 
        }
        return ans;
    }
};
