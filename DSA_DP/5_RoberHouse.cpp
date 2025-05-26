#include<bits/stdc++.h>
using namespace std;

// recursion

int solve(int n, vector<int>& arr) {
    if(n==0) return arr[0];
    if(n<0) return 0;
    
    int pick=arr[n]+solve(n-2,arr);
    int notpick=0+solve(n-1,arr);
    
    return max(pick,notpick);
}

int main() {
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    cout << solve(n, arr);

    return 0;
}


// Mem

#include <bits/stdc++.h>
using namespace std;

int solveUtil(int idx, vector<int>& arr, vector<int>& dp) {
    if(idx==0) return arr[0];
    if(idx<0) return 0;
    
    if(dp[idx]!=-1) return dp[idx];
    
    int pick=arr[idx]+solveUtil(idx-2,arr,dp);
    int notpick=0+solveUtil(idx-1,arr,dp);
    
    return dp[idx]=max(pick,notpick);
}

int solve(int n, vector<int>& arr) {
    vector<int> dp(n+1,-1);
    return solveUtil(n,arr,dp);
}

int main() {
    vector<int> arr{2, 1, 4, 9,20};
    int n = arr.size();
    
    cout << solve(n, arr);

    return 0;
}

// Tabulation

#include <bits/stdc++.h>
using namespace std;

int solveUtil(int idx, vector<int>& arr, vector<int>& dp) {
    dp[0]=arr[0];

    for(int i=1;i<idx;i++){

    int pick=arr[i];
    if(i>1) pick+=dp[i-2];

    int notpick=0+dp[i-1];
    
    dp[i]=max(pick,notpick);
    }
    return dp[idx-1];
}

int solve(int n, vector<int>& arr) {
    vector<int> dp(n+1,-1);
    return solveUtil(n,arr,dp);
}

int main() {
    vector<int> arr{2, 1, 4, 9,20};
    int n = arr.size();
    
    cout << solve(n, arr);

    return 0;
}



//space

#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& arr) {
    int prev=arr[0];
    int prev1=0;
    
    for(int i=1;i<n;i++){
      int pick=arr[i];
      if(i>1) pick+=prev1;
      
      int nonpick=0+prev;
      
      int curr=max(pick,nonpick);
      prev1=prev;
      prev=curr;
    }
    return prev;
}

int main() {
    vector<int> arr{2, 1, 4, 9,20};
    int n = arr.size();
    
    cout << solve(n, arr);

    return 0;
}

