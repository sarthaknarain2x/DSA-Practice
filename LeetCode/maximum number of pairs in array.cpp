class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int c=0;
        for(int i=0; i<n-1; i++) {
            if(nums[i] == nums[i+1]) {
                c++;
                nums[i+1] = -1;
                nums[i] = -1;
            }
        }
        return {c, n-2*c};
    }
};

// using map
// class Solution {
// public:
// 	//store the frequency of each of the number in the map and
// 	//then return the answer as sum all the values divided by 2 and 
// 	//sum of all modulo by 2
//     vector<int> numberOfPairs(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         for(auto i: nums) mp[i]++;
//         int c1 = 0, c2 = 0;
//         for(auto m: mp){
//             c1 += m.second/2;
//             c2 += m.second%2;
//         }
//         return {c1, c2};
//     }
// };
