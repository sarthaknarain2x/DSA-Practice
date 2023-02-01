//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        int lo=1, hi = x;
        long long int ans=0;

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

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends
