class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int ans = INT_MAX, p = -1, q = -1;
        for(int i=0; i<n; i++) {
            if(a[i] == x)
                p=i;
            if(a[i] == y)
                q=i;
            if(p!=-1 && q!=-1)
                ans = min(ans,abs(p-q));
        }
       
        if(ans == INT_MAX || ans == 0)
            return -1;
        else
            return ans;
    }
};
