class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n=nums.size();
        int totsum=0;
        for(int i=0;i<n;i++){
            totsum+=nums[i];
        }
        vector<vector<bool>> dp(n,vector<bool>(totsum+1,false));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if(nums[0]<=totsum){
            dp[0][nums[0]]=true;
        }
        for(int ind=1;ind<n;ind++){
            for(int target=1;target<=totsum;target++){
                bool nottaken=dp[ind-1][target];

                bool taken=false;
                if(nums[ind]<=target){
                    taken=dp[ind-1][target-nums[ind]];
                }
                dp[ind][target]=nottaken||taken;
            }
        }

        int mini=1e9;
        for(int i=0;i<=totsum;i++){
            if(dp[n-1][i]==true){
                int diff=abs(i-(totsum-i));
                mini=min(mini,diff);
            }
        }
        return mini;
    }
};


//space
