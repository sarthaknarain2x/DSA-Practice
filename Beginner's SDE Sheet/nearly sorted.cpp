//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
        priority_queue <int, vector<int>, greater<int>> minh;
        int j=0;
        vector<int> ans(num);
        for(int i=0; i<num; i++) {
            minh.push(arr[i]);
            
            if(minh.size() > K) {
                ans[j++] = minh.top();
                minh.pop();
            }
        }
        
        while(!minh.empty()) {
            ans[j++] = minh.top();
            minh.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}

// } Driver Code Ends
