class Solution {
    public:
    
        void comsum(int idx,int tar,vector<int> &a,vector<vector<int>> &ans,vector<int> &ds){
            if(idx==a.size()){
                if(tar==0){
                    ans.push_back(ds);
                }
                return;
            }
    
            if(a[idx]<=tar){
                ds.push_back(a[idx]);
                comsum(idx,tar-a[idx],a,ans,ds);
                ds.pop_back();
            }
    
            comsum(idx+1,tar,a,ans,ds);
        }
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> ans;
            vector<int> ds;
            comsum(0,target,candidates,ans,ds);
            return ans;
        }
    };