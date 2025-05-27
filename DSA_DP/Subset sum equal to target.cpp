// Given an array of non-negative integers and a target sum, determine if there is a subset of the array that sums to the target.
//recursive

#include <bits/stdc++.h>
using namespace std;

bool subsetSumUtil(int ind, int target, vector<int>& arr) {
  if(target==0) return true;
  if(arr[ind]==0) return (arr[0]==target);
  
  bool notpick=subsetSumUtil(ind-1,target,arr);
  bool pick=false;
  if(target>=arr[ind]){
    pick=subsetSumUtil(ind-1,target-arr[ind],arr);
  }
  
  return pick | notpick;
}

bool subsetSumToK(int n, int k, vector<int>& arr) {
    return subsetSumUtil(n - 1, k, arr);
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int k = 19;
    int n = arr.size();

    if (subsetSumToK(n, k, arr))
        cout << "Subset with the given target found";
    else
        cout << "Subset with the given target not found";

    return 0;
}

//Mem
#include <bits/stdc++.h>
using namespace std;

bool subsetSumUtil(int ind, int target, vector<int>& arr,vector<vector<int>> dp) {
  if(target==0) return true;
  if(arr[ind]==0) return (arr[0]==target);
  
  if(dp[ind][target]!=-1) return dp[ind][target];
  
  bool notpick=subsetSumUtil(ind-1,target,arr,dp);
  bool pick=false;
  if(target>=arr[ind]){
    pick=subsetSumUtil(ind-1,target-arr[ind],arr,dp);
  }
  
  return dp[ind][target]=pick | notpick;
}

bool subsetSumToK(int n, int k, vector<int>& arr) {
    vector<vector<int>> dp(n,vector<int>(k+1,-1));
    return subsetSumUtil(n - 1, k, arr,dp);
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int k = 9;
    int n = arr.size();

    if (subsetSumToK(n, k, arr))
        cout << "Subset with the given target found";
    else
        cout << "Subset with the given target not found";

    return 0;
}


//Tab
#include <bits/stdc++.h>
using namespace std;

bool subsetSumToK(int n, int k, vector<int>& arr) {
  
    vector<vector<bool>> dp(n,vector<bool>(k+1,0));
    
    for(int i=0;i<n;i++){
      dp[i][0]=true;
    }
    
    if(arr[0]<=k){
      dp[0][arr[0]]=true;
    }
    
    for(int ind=1;ind<n;ind++){
      for(int target=1;target<=k;target++){
        bool nottaken=dp[ind-1][target];
        bool taken=false;
        if(target>=arr[ind]){
          taken=dp[ind-1][target-arr[ind]];
        }
        dp[ind][target] = nottaken || taken;
      }
    }
    return dp[n - 1][k];
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int k = 9;
    int n = arr.size();

    if (subsetSumToK(n, k, arr))
        cout << "Subset with the given target found";
    else
        cout << "Subset with the given target not found";

    return 0;
}

//Space-optimization

#include <bits/stdc++.h>
using namespace std;

bool subsetSumToK(int n, int k, vector<int>& arr) {
    vector<bool> prev(k + 1, false);
    prev[0] = true;
    if (arr[0] <= k)
        prev[arr[0]] = true;

    for (int i = 1; i < n; i++) {
        vector<bool> cur(k + 1, false);
        cur[0] = true;
        for (int target = 1; target <= k; target++) {
            bool notTaken = prev[target];
            bool taken = false;
            if (arr[i] <= target)
                taken = prev[target - arr[i]];
            cur[target] = notTaken || taken;
        }
        prev = cur;
    }

    return prev[k];
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int k = 4;

    if (subsetSumToK(arr.size(), k, arr))
        cout << "Subset with the given target found";
    else
        cout << "Subset with the given target not found";

    return 0;
}

