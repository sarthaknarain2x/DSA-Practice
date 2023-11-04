int transitionPoint(int arr[], int n) {
        // code here
        int lo=0, hi=n-1, mid, ans=-1;
        
        while(lo<=hi) {
            mid = lo+(hi-lo)/2;
            
            if(arr[mid] == 1) {
                ans=mid;
                hi=mid-1;
            }
            else if(arr[mid] != 1) {
                lo=mid+1;
            }
        }
        return ans;
    }
