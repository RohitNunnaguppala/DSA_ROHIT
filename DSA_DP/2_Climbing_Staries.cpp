//memoization 
class Solution {
public:
    int solve(int n,vector<int> dp){
        if(n<=1){
            return 1;
        }
        if(dp[n]!=-1) return dp[n];

        return dp[n]=solve(n-1,dp)+solve(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
     }
};

// Tabulation
class Solution {
public:
    
    int climbStairs(int n) {
        
        if(n<=1){
            return 1;
        }
        vector<int> dp(n+1);
        dp[0]=1;
        dp[1]=1;

        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }

        return dp[n];
    }
};


// Space Optimized Tabulation
class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int prev2 = 1;
        int prev1 = 2;

        for (int i = 3; i <= n; i++) {
            int cur = prev2 + prev1;
            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }
};