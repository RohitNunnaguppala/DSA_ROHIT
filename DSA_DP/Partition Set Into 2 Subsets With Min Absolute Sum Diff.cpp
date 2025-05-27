class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n=nums.size();
        int totsum=0;
        for(int i=0;i<n;i++){
            totsum+=nums[i];
        }
        vector<vector<bool>> dp(n,vector<bool>(totsum+1,false));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if(nums[0]<=totsum){
            dp[0][nums[0]]=true;
        }
        for(int ind=1;ind<n;ind++){
            for(int target=1;target<=totsum;target++){
                bool nottaken=dp[ind-1][target];

                bool taken=false;
                if(nums[ind]<=target){
                    taken=dp[ind-1][target-nums[ind]];
                }
                dp[ind][target]=nottaken||taken;
            }
        }

        int mini=1e9;
        for(int i=0;i<=totsum;i++){
            if(dp[n-1][i]==true){
                int diff=abs(i-(totsum-i));
                mini=min(mini,diff);
            }
        }
        return mini;
    }
};


//tabulation

#include <bits/stdc++.h>
using namespace std;

int minSubsetSumDifference(vector<int>& arr, int n) {
    int totsum = 0;
    for (int i = 0; i < n; i++) totsum += arr[i];

    vector<vector<bool>> dp(n, vector<bool>(totsum + 1, false));

    // Base case: Subset sum of 0 is always possible
    for (int i = 0; i < n; i++) dp[i][0] = true;

    // Base case: First element alone
    if (arr[0] <= totsum) dp[0][arr[0]] = true;

    // Tabulation
    for (int ind = 1; ind < n; ind++) {
        for (int target = 1; target <= totsum; target++) {
            bool notTaken = dp[ind - 1][target];
            bool taken = false;
            if (target >= arr[ind])
                taken = dp[ind - 1][target - arr[ind]];
            dp[ind][target] = notTaken || taken;
        }
    }

    // Find the minimum absolute difference
    int mini = 1e9;
    for (int s1 = 0; s1 <= totsum / 2; s1++) {
        if (dp[n - 1][s1] == true) {
            int s2 = totsum - s1;
            mini = min(mini, abs(s2 - s1));
        }
    }

    return mini;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
    cout << "The minimum absolute difference is: " << minSubsetSumDifference(arr, n);
    return 0;
}

// Space-optimization

