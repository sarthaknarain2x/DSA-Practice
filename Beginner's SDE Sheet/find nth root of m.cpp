//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here
	    long long int lo = 1, hi = m;
	    while(lo<=hi) {
	        long long int mid = (lo+hi)/2;
	        if(m==pow(mid,n))
	            return mid;
	        else if (m<pow(mid,n))
	            hi = mid-1;
	        else
	            lo = mid+1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
