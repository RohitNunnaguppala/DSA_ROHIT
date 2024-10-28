class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        vector<int> dp(n, 1), prev(n, -1), result;
        int maxIndex = 0;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
            if (dp[i] > dp[maxIndex]) maxIndex = i;
        }

        for (int i = maxIndex; i >= 0; i = prev[i]) {
            result.push_back(nums[i]);
            if (prev[i] == i) break;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
