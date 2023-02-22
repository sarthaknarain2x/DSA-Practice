class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        vector<int> arr;
        
        for(int i=0; i<N; i++) {
            int sum = 0;
            for(int j=i; j<N; j++) {
                sum += Arr[j];
                arr.push_back(sum);
            }
        }
        sort(arr.begin(), arr.end());
        return arr[arr.size()-K];
    }
};
