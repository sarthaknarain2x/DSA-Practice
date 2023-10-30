int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum=0, tSum=0;
        for(int i=0; i<n; i++) {
            sum += a[i];
        }
        
        for(int i=0; i<n; i++) {
            sum -= a[i];
            if(sum == tSum) {
                return i+1;
            }
            tSum += a[i];
        }
        return -1;
    }
