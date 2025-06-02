class Solution {
public:
    int maxLen = 0;

    int lcs(string& s1, string& s2, int i, int j, vector<vector<int>>& dp) {
        if(i < 0 || j < 0) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        if(s1[i] == s2[j]) {
            dp[i][j] = 1 + lcs(s1, s2, i - 1, j - 1, dp);
            maxLen = max(maxLen, dp[i][j]);  // update max length found
            return dp[i][j];
        } else {
            return dp[i][j] = 0;  // reset if characters don’t match
        }
    }

    int longestCommonSubstring(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        // Check all ending positions in both strings
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                lcs(text1, text2, i, j, dp);
            }
        }

        return maxLen;
    }
};
