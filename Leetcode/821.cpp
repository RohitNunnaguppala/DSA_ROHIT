class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
         int n = s.size();
        vector<int> answer(n, n); 
        
        int lastOccurrence = -n;  
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                lastOccurrence = i;
            }
            answer[i] = i - lastOccurrence;
        }
        
        lastOccurrence = 2 * n; 
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == c) {
                lastOccurrence = i;
            }
            answer[i] = std::min(answer[i], lastOccurrence - i);
        }
        
        return answer;
    }
};