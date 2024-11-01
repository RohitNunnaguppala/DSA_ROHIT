class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string result;
        
        while (ss >> word) {
            reverse(word.begin(), word.end());
            result += word + " ";
        }
        
        if (!result.empty()) result.pop_back();
        return result;
    }
};