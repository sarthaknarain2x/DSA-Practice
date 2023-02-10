//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool chk(vector<int> &piles, int H, int mid) {
        int time=0;
        for(int i=0; i<piles.size(); i++) {
            if(piles[i]%mid != 0) 
                time = time + (piles[i] / mid) + 1;
            else
                time = time + piles[i] / mid;
        }
        if(time<=H)
            return true;
        else
            return false;
    }
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int lo = 1, hi = *max_element(piles.begin(), piles.end()), mid;
        while(lo<hi) {
            mid = lo + (hi-lo)/2;
            if(chk(piles, H, mid))
                hi = mid;
            else
                lo = mid+1;
        }
        return hi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
