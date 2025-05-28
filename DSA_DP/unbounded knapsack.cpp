// recursion + memoization
#include<bits/stdc++.h>
using namespace std;

int fun(int i,vector<int>& wt, vector<int>& val, int W, vector<vector<int>>& dp) {
    if (i == 0) {
        return (W/wt[0]*val[0]);
    }
    
    if(dp[i][W] != -1) {
        return dp[i][W];
    }
    int notTake = fun(i - 1, wt, val, W,dp);
    int take = 0;
    if (wt[i] <= W) {
        take +=fun(i, wt, val, W - wt[i],dp);
    }
    
    return dp[i][W]= max(take, notTake);
}

int unboundedKnapsack(int n, vector<int>& val, vector<int>& wt, int W) {
    vector<vector<int>> dp(n, vector<int>(W + 1, -1));
    return fun(n - 1, wt, val, W, dp);
}