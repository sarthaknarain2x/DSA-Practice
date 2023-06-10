class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size()==2)
            return skill[0]*skill[1];
        sort(skill.begin(), skill.end());
        // unordered_map <int, int> mp;
        int i=0, j=skill.size()-1;
        long long sum=0;
        int target = skill[i]+skill[j];
        while(i<j) {
            if(skill[i]+skill[j]==target) {
                sum += skill[i]*skill[j];
                i++;
                j--;
            }
            else
                return -1; 
        }
        return sum;
    }
};
