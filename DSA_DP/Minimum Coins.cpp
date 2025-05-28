//recursion
#include <bits/stdc++.h>
using namespace std;

int minimumElementsRecursive(vector<int>& arr, int ind, int T) {
    if (ind == 0) {
        if (T % arr[0] == 0)
            return T / arr[0];
        else
            return 1e9;
    }

    int notTaken = minimumElementsRecursive(arr, ind - 1, T);
    int taken = 1e9;
    if (arr[ind] <= T)
        taken = 1 + minimumElementsRecursive(arr, ind, T - arr[ind]);

    return min(notTaken, taken);
}

int minimumElements(vector<int>& arr, int T) {
    int n = arr.size();
    int ans = minimumElementsRecursive(arr, n - 1, T);
    return (ans >= 1e9) ? -1 : ans;
}

int main() {
    vector<int> arr = {1, 2, 3};
    int T = 7;
    cout << "The minimum number of coins required to form the target sum is " << minimumElements(arr, T);
    return 0;
}

// memoization
#include <bits/stdc++.h>
using namespace std;


int minimumElementsRecursive(vector<int>& arr, int ind, int T,vector<vector<int>> &dp) {
    if(ind==0){
      if(T%arr[0]==0) return T/arr[0];
      else return 1e9;
    }
    
    if(dp[ind][T]!=-1) return dp[ind][T];
    
    int nottaken=minimumElementsRecursive(arr,ind-1,T,dp);
    int taken=1e9;
    if(arr[ind]<=T){
      taken=1+minimumElementsRecursive(arr,ind,T-arr[ind],dp);
    }
    
    return dp[ind][T]= min(taken,nottaken);
}

int minimumElements(vector<int>& arr, int T) {
   int n=arr.size();
   vector<vector<int>> dp(n,vector<int>(T + 1, -1));
    int ans=minimumElementsRecursive(arr,n-1,T,dp);
    return (ans>=1e9)?-1:ans;
}

int main() {
    vector<int> arr = {1, 2, 3};
    int T = 7;
    cout << "The minimum number of coins required to form the target sum is " << minimumElements(arr, T);
    return 0;
}
// tabulation
#include <bits/stdc++.h>
using namespace std;

int minimumElements(vector<int>& arr, int T) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(T + 1, 0));

    for (int i = 0; i <= T; i++) {
        if (i % arr[0] == 0)
            dp[0][i] = i / arr[0];
        else
            dp[0][i] = 1e9;
    }

    for (int ind = 1; ind < n; ind++) {
        for (int target = 0; target <= T; target++) {
            int notTake = dp[ind - 1][target];
            int take = 1e9;
            if (arr[ind] <= target)
                take = 1 + dp[ind][target - arr[ind]];
            dp[ind][target] = min(notTake, take);
        }
    }

    int ans = dp[n - 1][T];
    return (ans >= 1e9) ? -1 : ans;
}

int main() {
    vector<int> arr = {1, 2, 3};
    int T = 7;
    cout << minimumElements(arr, T);
    return 0;
}

//space optimized
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
