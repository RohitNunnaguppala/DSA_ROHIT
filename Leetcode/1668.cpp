class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int k = 0;
        string current_word = "";
        while (sequence.find(current_word) != string::npos) {
            k++;  
            current_word += word; 
        }
        return k - 1; 
    }
};