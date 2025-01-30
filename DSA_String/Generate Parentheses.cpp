class Solution {
public:

    void generateParenthesesHelper(int n, int openCount, int closeCount, string current, vector<string>& result) {
        if(openCount==n&&closeCount==n) {
            result.push_back(current);
            return;
        }
        
        if (openCount < n) {
            generateParenthesesHelper(n, openCount + 1, closeCount, current + '(', result);
        }
        
        if (closeCount < openCount) {
            generateParenthesesHelper(n, openCount, closeCount + 1, current + ')', result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generateParenthesesHelper(n, 0, 0, "", res);  
        return res;
    }
};