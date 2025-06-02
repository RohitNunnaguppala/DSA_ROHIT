#include <bits/stdc++.h>
using namespace std;

int getAns(int arr[], int n, int ind, int prev_index, vector<vector<int>>& dp, vector<vector<int>>& path) {
    if (ind == n)
        return 0;

    if (dp[ind][prev_index + 1] != -1)
        return dp[ind][prev_index + 1];

    int notTake = getAns(arr, n, ind + 1, prev_index, dp, path);

    int take = 0;
    if (prev_index == -1 || arr[ind] > arr[prev_index]) {
        take = 1 + getAns(arr, n, ind + 1, ind, dp, path);
    }

    if (take > notTake) {
        path[ind][prev_index + 1] = 1;  // we took this element
    } else {
        path[ind][prev_index + 1] = 0;  // we skipped this element
    }

    return dp[ind][prev_index + 1] = max(take, notTake);
}

void printLIS(int arr[], int n, vector<vector<int>>& path) {
    int ind = 0, prev_index = -1;
    vector<int> lis;

    while (ind < n) {
        if (path[ind][prev_index + 1] == 1) {
            lis.push_back(arr[ind]);
            prev_index = ind;
        }
        ind++;
    }

    cout << "The Longest Increasing Subsequence is: ";
    for (int num : lis)
        cout << num << " ";
    cout << endl;
}

int longestIncreasingSubsequence(int arr[], int n) {
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    vector<vector<int>> path(n, vector<int>(n + 1, 0));

    int len = getAns(arr, n, 0, -1, dp, path);
    cout << "Length of LIS: " << len << endl;
    printLIS(arr, n, path);

    return len;
}

int main() {
    int arr[] = {10, 9, 2, 5, 3, 7, 101, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    longestIncreasingSubsequence(arr, n);

    return 0;
}
