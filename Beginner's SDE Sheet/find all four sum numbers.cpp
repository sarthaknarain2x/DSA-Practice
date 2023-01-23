//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        if(arr.size()<4)
            return ans;
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size();i++) {
            for(int j=i+1; j<arr.size();j++) {
                long long int newTarget = 1LL*k - 1LL*arr[i] - 1LL*arr[j];
                int front = j+1;
                int end = arr.size()-1;

                while(front<end) {
                    int twoSum = arr[front] + arr[end];
                    if(twoSum<newTarget)
                        front++;
                    else if(twoSum>newTarget)
                        end--;
                    else {
                        vector<int> temp(4,0);
                        temp[0] = arr[i];
                        temp[1] = arr[j];
                        temp[2] = arr[front];
                        temp[3] = arr[end];
                        ans.push_back(temp);

                        while(front<end && arr[front]==temp[2])
                            front++; // for not taking duplicates of front
                        while(front<end && arr[end]==temp[3])
                            end--; // for not taking duplicates of end
                    }
                }

                while(j<arr.size()-1 && arr[j]==arr[j+1])
                    j++;
            }

            while(i<arr.size()-1 && arr[i]==arr[i+1])
                i++;
        }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
