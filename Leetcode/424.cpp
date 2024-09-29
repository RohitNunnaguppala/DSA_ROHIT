class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, max_count = 0, result = 0;
        vector<int> count(26, 0);

        for (int right = 0; right < s.size(); ++right) {
            count[s[right] - 'A']++;
            max_count = max(max_count, count[s[right] - 'A']);

            if ((right - left + 1) - max_count > k) {
                count[s[left] - 'A']--;
                left++;
            }

            result = max(result, right - left + 1);
        }

        return result; 
    }
};