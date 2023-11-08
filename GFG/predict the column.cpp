class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int ans=0, c, maxi=INT_MIN; 
        for(int i=0; i<N; i++) {
            c=0;
            for(int j=0; j<N; j++) {
                if(arr[j][i] == 0) {
                    c++;
                }
            }
            if(c!=0 && c>maxi) {
                maxi = c;
                ans = i;
            }
        }
        if(maxi==INT_MIN)
            return -1;
        return ans;
    }
};
