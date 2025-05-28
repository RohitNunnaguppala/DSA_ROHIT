#include <bits/stdc++.h>
using namespace std;

//recursion
int f(int ind, int length, vector<int>& price) {
    if (ind == 0) {
        return length * price[0]; 
    }

    int notTake = f(ind - 1, length, price);
    int take = INT_MIN;
    int rodLength = ind + 1;
    if (rodLength <= length) {
        take = price[ind] + f(ind, length - rodLength, price); 
    }

    return max(take, notTake);
}

int cutRod(vector<int>& price, int N) {
    return f(N - 1, N, price);
}

//memerization

int f(int ind, int length, vector<int>& price, vector<vector<int>>& dp) {
    if (ind == 0) {
        return length * price[0]; 
    }

    if (dp[ind][length] != -1) return dp[ind][length];

    int notTake = f(ind - 1, length, price, dp);
    int take = INT_MIN;
    int rodLength = ind + 1;
    if (rodLength <= length) {
        take = price[ind] + f(ind, length - rodLength, price, dp);
    }

    return dp[ind][length] = max(take, notTake);
}

int cutRod(vector<int>& price, int N) {
    vector<vector<int>> dp(N, vector<int>(N + 1, -1));
    return f(N - 1, N, price, dp);
}


