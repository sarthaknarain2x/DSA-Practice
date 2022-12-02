//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int wholesum = n*(n+1)/2; // find the whole sum from 1 to n
        int sum = 0;
        for(int i=0; i<n-1;i++){
            sum += array[i];  // find the sum of array input
        }
        return (wholesum-sum); // calculate the difference of both to find the missing element
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
