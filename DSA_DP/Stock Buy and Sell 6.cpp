int getAns(vector<int> &Arr, int ind, int buy, int n, int fee, vector<vector<int>> &dp) {
    if (ind == n) return 0;

    if (dp[ind][buy] != -1)
        return dp[ind][buy];

    int profit;

    if (buy == 0) {
        profit = max(0 + getAns(Arr, ind + 1, 0, n, fee, dp), -Arr[ind] + getAns(Arr, ind + 1, 1, n, fee, dp));
    }

    if (buy == 1) {
        profit = max(0 + getAns(Arr, ind + 1, 1, n, fee, dp), Arr[ind] - fee + getAns(Arr, ind + 1, 0, n, fee, dp));
    }

    return dp[ind][buy] = profit;
}

int maximumProfit(int n, int fee, vector<int> &Arr) {
    vector<vector<int>> dp(n, vector<int>(2, -1));

    if (n == 0) return 0;

    int ans = getAns(Arr, 0, 0, n, fee, dp);
    return ans;
}


//Tab

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        if (n == 0) return 0;

    vector<vector<int>> dp(n + 1, vector<int>(2, 0));

    for (int ind = n - 1; ind >= 0; ind--) {
        for (int buy = 0; buy <= 1; buy++) {
            int profit;

            if (buy == 0) {
                profit = max(0 + dp[ind + 1][0], -prices[ind] + dp[ind + 1][1]);
            }

            if (buy == 1) {
                profit = max(0 + dp[ind + 1][1], prices[ind] - fee + dp[ind + 1][0]);
            }

            dp[ind][buy] = profit;
        }
    }

    return dp[0][0];
    }
};