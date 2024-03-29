class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.size()<=1){
            return intervals;
        }

        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0]; // first interval in temp vector
        for(auto itr: intervals) { 
            if(itr[0]<=temp[1]) { // with ref to example if 3<=2 (means overlapping)
                temp[1] = max(itr[1], temp[1]); // whichever 3 or 6 is larger will be right element.eg:[1,3];[2,6] itr[1]-> 3 temp[1]->6. 6 is larger hence right ele  
            }
            else{ // if not overlapping
                ans.push_back(temp); // push that to ans vector
                temp = itr; 
            }
        }
        ans.push_back(temp); // last interval pushing
        return ans;
    }
};

/*
  class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) 
            return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        output.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++) {
            if(intervals[i][0] <= output.back()[1]) 
                output.back()[1] = max(output.back()[1] , intervals[i][1]);
            else 
                output.push_back(intervals[i]); 
        }
        return output;
    }
};  
*/

// BEST SOLUTION->

/*
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int j=0;

        for(int i=1;i<intervals.size();i++){
            if(ans[j][1] >= intervals[i][0]){
                if(ans[j][1] <= intervals[i][1]){
                    ans[j][1] = intervals[i][1];
                }
            }
            else{
                ans.push_back(intervals[i]);
                j++;
            }
        }
        return ans; 
    }
};
*/
