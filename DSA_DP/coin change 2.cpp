//recursion

class Solution {
public:
    int fun(int t, vector<int>& a,int ind){
        if(ind==0){
            return (t%a[ind]==0)? 1:0;
        }

        int nottake=fun(t,a,ind-1);
        int take=0;
        if(a[ind]<=t){
            take+=fun(t-a[ind],a,ind);
        }
        return take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        return fun(amount,coins,n-1);
    }
};

//memoization

class Solution {
public:
    int fun(int t, vector<int>& a,int ind,vector<vector<int>> &dp){
        if(ind==0){
            return (t%a[ind]==0)? 1:0;
        }

        if(dp[ind][t]!=-1){
            return dp[ind][t];
        }
        int nottake=fun(t,a,ind-1,dp);
        int take=0;
        if(a[ind]<=t){
            take+=fun(t-a[ind],a,ind,dp);
        }
        return take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int> (t+1,-1));
        return fun(amount,coins,n-1,dp);
    }
};

//tabulation
int change(int amount, vector<int>& coins) {
        const int MOD = 1e9 + 7;
        int n=coins.size();
        vector<vector<long long>> dp(n,vector<long long> (amount+1,-1));
        
        for(int t=0;t<=amount;t++){
            dp[0][t]=(t%coins[0]==0)?1:0;
        }

        for(int i=1;i<=n-1;i++){
            for(int tar=0;tar<=amount;tar++){
                long long nottake=dp[i-1][tar];
                long long take=(coins[i]<=tar)?dp[i][tar-coins[i]]:0;

                dp[i][tar]=take+nottake%MOD;
            }
        }
        return static_cast<int>(dp[n-1][amount]);
    }