#include<bits/stdc++.h>
using namespace std


class Solution {
public:
    int mod = 1e9 + 7;  
    int findWays(vector<int> &num, int tar) {
        int n = num.size();
        vector<int> prev(tar + 1, 0);
        if (num[0] == 0)
            prev[0] = 2;  
        else
            prev[0] = 1;  
        if (num[0] != 0 && num[0] <= tar)
            prev[num[0]] = 1;  

        for (int ind = 1; ind < n; ind++) {
            vector<int> cur(tar + 1, 0);
            for (int target = 0; target <= tar; target++) {
                int notTaken = prev[target];

                int taken = 0;
                if (num[ind] <= target)
                    taken = prev[target - num[ind]];

                cur[target] = (notTaken + taken) % mod;
            }
            prev = cur;
        }
        return prev[tar];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int totSum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            totSum += nums[i];
        }
        if (totSum - target < 0 || (totSum - target) % 2 != 0)
            return 0;  
        return findWays(nums, (totSum - target) / 2);
    }
};
