//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        long long N = n;
        long long sum = (N*(N+1))/2;
        long long prod = (N*(N+1)*(2*N+1))/6;
        
        long long missingNumber = 0;
        long long repeating = 0;
        
        for(int i=0; i<n;i++) {
            long long a = arr[i];
            sum -= a;
            prod -= a*a;
        }
        
        missingNumber = ((prod/sum)+sum)/2;
        repeating = missingNumber - sum;
        
        int *ans;
        ans[0] = repeating;
        ans[1] = missingNumber;
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
