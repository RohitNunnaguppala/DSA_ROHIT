class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        const int MOD = 1e9 + 7; 
        vector<long long> prev(m + 1, 0);
        prev[0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = m; j >= 1; j--) {
                if (s[i - 1] == t[j - 1]) {
                    prev[j] = (prev[j - 1] + prev[j]) % MOD;
                }
            }
        }
        
        return prev[m];
    }
};
