class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size()-1;
        int prod1=1; int maxi1=INT_MIN; int prod2=1; int maxi2=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            prod1*=nums[i];
            maxi1=max(prod1, maxi1);
            if(prod1==0) 
                prod1=1;
            prod2*=nums[n-i];
            maxi2=max(prod2, maxi2);
            if(prod2==0) 
                prod2=1;
        }
    return max(maxi1, maxi2);
    }
};
