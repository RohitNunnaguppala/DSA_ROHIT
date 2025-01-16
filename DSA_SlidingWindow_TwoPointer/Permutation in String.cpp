class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        
        vector<int> s1Count(26, 0), windowCount(26, 0);
        
        // Fill the frequency array for s1
        for (char c : s1) {
            s1Count[c - 'a']++;
        }
        
        // Sliding window approach
        int left = 0;
        for (int right = 0; right < s2.size(); ++right) {
            // Add current character to the window
            windowCount[s2[right] - 'a']++;
            
            // If the window size exceeds s1 size, slide the window
            if (right - left + 1 > s1.size()) {
                windowCount[s2[left] - 'a']--;
                left++;
            }
            
            // Check if the current window matches the character count of s1
            if (windowCount == s1Count) {
                return true;
            }
        }
        
        return false;
    }
};
