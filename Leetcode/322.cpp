#include<bits/stdc++.h>
using namespace std

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> prev(amount + 1, 0);
        vector<int> cur(amount + 1, 0);
        for (int i = 0; i <= amount; i++) {
            if (i % coins[0] == 0)
                prev[i] = i / coins[0];
            else
                prev[i] = 1e9;
        }
        for (int ind = 1; ind < n; ind++) {
            for (int target = 0; target <= amount; target++) {
                int notTake = prev[target];
                int take = 1e9;
                if (coins[ind] <= target)
                    take = 1 + cur[target - coins[ind]];
                cur[target] = min(notTake, take);
            }
            prev = cur;
        }
        int ans = prev[amount];
        if (ans >= 1e9)
            return -1;
        return ans;
    }
};
