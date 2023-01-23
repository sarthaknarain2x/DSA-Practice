class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()<4)
            return ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size();i++) {
            for(int j=i+1; j<nums.size();j++) {
                long long int newTarget = 1LL*target - 1LL*nums[i] - 1LL*nums[j];
                int front = j+1;
                int end = nums.size()-1;

                while(front<end) {
                    int twoSum = nums[front] + nums[end];
                    if(twoSum<newTarget)
                        front++;
                    else if(twoSum>newTarget)
                        end--;
                    else {
                        vector<int> temp(4,0);
                        temp[0] = nums[i];
                        temp[1] = nums[j];
                        temp[2] = nums[front];
                        temp[3] = nums[end];
                        ans.push_back(temp);

                        while(front<end && nums[front]==temp[2])
                            front++; // for not taking duplicates of front
                        while(front<end && nums[end]==temp[3])
                            end--; // for not taking duplicates of end
                    }
                }

                while(j<nums.size()-1 && nums[j]==nums[j+1])
                    j++;
            }

            while(i<nums.size()-1 && nums[i]==nums[i+1])
                i++;
        }
    return ans;
    }
};
