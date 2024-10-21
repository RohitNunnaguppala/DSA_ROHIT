#include<bits/stdc++.h>
using namespace std;

// Mem
int f(int ind,vector<int> &nums){
    if(ind==0) return nums[ind];
    if(ind<0) return 0;

    int pick=nums[ind]+f(ind-2,nums);
    int nonpick=0+f(ind-1,nums);

    return max(pick,nonpick);
}
int maxnonadjsum(vector<int> &nums){
    int n=nums.size();
    return f(n-1,nums);
}

int f(int ind,vector<int> &nums,vector<int> &dp){
    if(ind==0) return nums[ind];
    if(ind<0) return 0;

    if(dp[ind]!=-1) return dp[ind];

    int pick=nums[ind]+f(ind-2,nums,dp);
    int nonpick=0+f(ind-1,nums,dp);

    return dp[ind]=max(pick,nonpick);
}
int maxnonadjsum(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n,-1);
    return f(n-1,nums,dp);
}

//Tab
int f(int n,vector<int> &nums,vector<int> &dp){
    dp[0]=nums[0];
    for(int i=1;i<n;i++){
        int pick=nums[i];
        if(i>1){
            pick+=dp[i-2];
        }
        int nonpick=dp[i-1];

        dp[i]=max(pick,nonpick);
    }
    return dp[n-1];
}
int solve(int n,vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n,0);
    return f(n,nums,dp);
}

//space
int solve(int n,vector<int> &nums){
    int prev=nums[0];
    int prev2=0;

    for(int i=1;i<n;i++){
        int pick=nums[i];
        if(i>1){
            pick+=prev2;
        }
        int nonpick=0+prev;
        int cur_i=max(pick,nonpick);
        prev2=prev;
        prev=cur_i;
    }
    return prev;
}