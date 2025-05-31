#include <bits/stdc++.h>
using namespace std;


int f(vector<int>& arr, int i, int j, vector<vector<int>>& dp){
    if(i == j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    
    int mini = INT_MAX;
    for(int k = i; k < j; k++){
        int cost = f(arr,i,k,dp) + f(arr,k+1,j,dp) + arr[i-1]*arr[k]*arr[j];
        mini = min(mini, cost);
    }
    return dp[i][j] = mini;
}

int matrixMultiplication(vector<int>& arr, int N){
    vector<vector<int>> dp(N, vector<int>(N, -1));
    return f(arr, 1, N-1, dp);
}

int main(){
    vector<int> arr = {10, 20, 30, 40, 30};
    int N = arr.size();
    
    cout << "Minimum number of multiplications is " << matrixMultiplication(arr, N) << endl;
    
    return 0;
}
// Output: Minimum number of multiplications is 30000
// Explanation: The code implements the Matrix Chain Multiplication problem using dynamic programming.
// It calculates the minimum number of scalar multiplications needed to multiply a chain of matrices.
// The function `f` recursively computes the minimum cost of multiplying matrices from index `i` to `j`
// using memoization to store intermediate results in the `dp` table.
// The main function initializes the matrix dimensions and calls the `matrixMultiplication` function,   