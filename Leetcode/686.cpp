class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int repeatCount = 1;  
        string repeatedA = a;  
        
        while (repeatedA.length() < b.length()) {
            repeatedA += a;
            repeatCount++;
        }
        
        if (repeatedA.find(b) != string::npos) {
            return repeatCount;
        }
        
        repeatedA += a;
        repeatCount++;
        
        if (repeatedA.find(b) != string::npos) {
            return repeatCount;
        }
       
        return -1;
    }
};