class Solution {
    public:
        bool checkIfPangram(string s){
            unordered_set<char> l(s.begin(), s.end());
            return l.size() == 26; 
        }
    };