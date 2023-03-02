class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        priority_queue <int, vector<int>, greater <int>> minh;
        
        for(int i=0; i<N; i++) {
            int sum = 0;
            for(int j=i; j<N; j++) {
                sum += Arr[j];
                minh.push(sum);
                if(minh.size() > K) {
                    minh.pop();
                }
            }
        }
        
        int ans = minh.top();
        return ans;
    }
};
