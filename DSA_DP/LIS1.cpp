class Solution {
public:
    int getans(vector<int>& nums, int n, int ind, int prev_ind, vector<vector<int>>& dp) {
        if (ind == n) {
            return 0;
        }
        if (dp[ind][prev_ind + 1] != -1) {
            return dp[ind][prev_ind + 1];
        }
        int nottake = 0 + getans(nums, n, ind + 1, prev_ind, dp);
        int take = 0;
        if (prev_ind == -1 || nums[ind] > nums[prev_ind]) {
            take = 1 + getans(nums, n, ind + 1, ind, dp);
        }
        return dp[ind][prev_ind + 1] = max(nottake, take);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return getans(nums, n, 0, -1, dp);
    }
};
