
pair<long long, long long> getMinMax(long long a[], int n) {
    long long min = a[0];
    long long max = a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    return {min, max};
}