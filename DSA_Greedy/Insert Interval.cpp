class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newint){
        vector<vector<int>> res;
        int i=0;
        int n=intervals.size();

        while(i<n && intervals[i][1]<newint[0]){
            res.push_back(intervals[i]);
            i++;
        }

        while(i<n&&intervals[i][0]<=newint[1]){
            newint[0]=min(intervals[i][0],newint[0]);
            newint[1]=max(intervals[i][1],newint[1]);
            i++;
        }
        res.push_back(newint);

        while(i<n){
            res.push_back(intervals[i]);
            i++;
        }

        return res;
        
    }
};