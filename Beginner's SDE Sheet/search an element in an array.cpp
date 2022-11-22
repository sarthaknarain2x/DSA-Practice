//Search an Element in an array
class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        // Your code here
        int i;
        for(i = 0 ; i < N; i++){
            if (arr[i]==X){
                return i;
                break;
            }
        }
        if( i==N ){
            return -1;
        }
        
    }

};
