class Solution {
public:
    bool chk(vector<int> &piles, int h, int mid) {
        int time=0;
        for(int i=0; i<piles.size(); i++) {
            if(piles[i]%mid != 0) {
                time = time + (piles[i] / mid) + 1;
            }
            else
                time = time + piles[i] / mid;
        }
        if(time<=h)
            return true;
        else
            return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = *max_element(piles.begin(), piles.end()), mid;
        while(lo<hi){
            mid = lo + (hi-lo)/2;
            if(chk(piles, h, mid))
                hi = mid;
            else
                lo = mid+1;
        }
        return hi;
    }
};
