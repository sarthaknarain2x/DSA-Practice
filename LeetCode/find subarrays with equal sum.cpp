//CPP Code
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        if(nums.size()==2)
            return false;
        int sum=0; unordered_map <int, int> mp;
        for(int i=1; i<nums.size();i++) {
            sum = nums[i]+nums[i-1];
            mp[sum]++;
            if(mp[sum]>1)
                return true;
        }
        return false;
    }
};

// Java Code
// class Solution {
//     public boolean findSubarrays(int[] nums) {
//         int sum, i;
//         Map <Integer, Integer> mp = new HashMap <>();  
//         for(i=0; i<nums.length-1;i++) {
//             sum = nums[i] + nums[i+1];
//             if(mp.containsKey(sum))
//                 return true;
//             else
//                 mp.put(sum, i);
//         }
//         return false;
//     }
// }
