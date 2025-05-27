// recursion
#include<bits/stdc++.h>
using namespace std;

int f(int ind, int w, vector<int> &wt, vector<int> &val) {
    if (ind == 0) {
        return (wt[0] <= w) ? val[0] : 0;
    }

    int notTaken = f(ind - 1, w, wt, val);
    int taken = INT_MIN;
    if (wt[ind] <= w) {
        taken = val[ind] + f(ind - 1, w - wt[ind], wt, val);
    }

    return max(taken, notTaken);
}

int knapsack(int n, int w, vector<int> &wt, vector<int> &val) {
    return f(n - 1, w, wt, val);
}

int main() {
    int n = 4;
    int w = 7;
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {1, 4, 5, 7};
    int maxProfit = knapsack(n, w, wt, val);
    cout << maxProfit << endl;
    return 0;
}

// memoization
#include<bits/stdc++.h>
using namespace std;

int f(int ind, int w, vector<int> &wt, vector<int> &val, vector<vector<int>> &dp) {
    if (ind == 0) {
        return (wt[0] <= w) ? val[0] : 0;
    }

    if (dp[ind][w] != -1) return dp[ind][w];

    int notTaken = f(ind - 1, w, wt, val, dp);
    int taken = INT_MIN;
    if (wt[ind] <= w) {
        taken = val[ind] + f(ind - 1, w - wt[ind], wt, val, dp);
    }

    return dp[ind][w] = max(taken, notTaken);
}

int knapsack(int n, int w, vector<int> &wt, vector<int> &val) {
    vector<vector<int>> dp(n, vector<int>(w + 1, -1));
    return f(n - 1, w, wt, val, dp);
}

int main() {
    int n = 4;
    int w = 7;
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {1, 4, 5, 7};
    cout << knapsack(n, w, wt, val) << endl;
    return 0;
}

// tabulation
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(int n, int w, vector<int> &wt, vector<int> &val) {
    vector<vector<int>> dp(n, vector<int>(w + 1, 0));

    for (int i = wt[0]; i <= w; i++) {
        dp[0][i] = val[0];
    }

    for (int ind = 1; ind < n; ind++) {
        for (int cap = 0; cap <= w; cap++) {
            int notTaken = dp[ind - 1][cap];
            int taken = (wt[ind] <= cap) ? val[ind] + dp[ind - 1][cap - wt[ind]] : 0;
            dp[ind][cap] = max(notTaken, taken);
        }
    }

    return dp[n - 1][w];
}

int main() {
    int n = 4;
    int w = 7;
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {1, 4, 5, 7};
    cout << knapsack(n, w, wt, val) << endl;
    return 0;
}

// space optimized 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(int n, int w, vector<int> &wt, vector<int> &val) {
    vector<int> prev(w + 1, 0), curr(w + 1, 0);

    for (int i = wt[0]; i <= w; i++) {
        prev[i] = val[0];
    }

    for (int ind = 1; ind < n; ind++) {
        for (int cap = 0; cap <= w; cap++) {
            int notTaken = prev[cap];
            int taken = (wt[ind] <= cap) ? val[ind] + prev[cap - wt[ind]] : 0;
            curr[cap] = max(notTaken, taken);
        }
        prev = curr;
    }

    return prev[w];
}

int main() {
    int n = 4;
    int w = 7;
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {1, 4, 5, 7};
    cout << knapsack(n, w, wt, val) << endl;
    return 0;
}

