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
