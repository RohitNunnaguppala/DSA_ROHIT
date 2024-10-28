class Solution {
public:
    bool compare(string& s1, string& s2) {
        if (s1.size() != s2.size() + 1) return false;

        int first = 0, second = 0;
        
        while (first < s1.size()) {
            if (second < s2.size() && s1[first] == s2[second]) {
                first++;
                second++;
            } else {
                first++;
            }
        }
        return first == s1.size() && second == s2.size();
    }

    static bool comp(string& s1, string& s2) {
        return s1.size() < s2.size();
    }

    int longestStrChain(vector<string>& words) {
        int n = words.size();
        sort(words.begin(), words.end(), comp);

        vector<int> dp(n, 1);
        int maxLength = 1;

        for (int i = 0; i < n; i++) {
            for (int prev_index = 0; prev_index < i; prev_index++) {
                if (compare(words[i], words[prev_index]) && dp[prev_index] + 1 > dp[i]) {
                    dp[i] = dp[prev_index] + 1;
                }
            }
            maxLength = max(maxLength, dp[i]);
        }
        return maxLength;
    }
};
