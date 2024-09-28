class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int i = 0;
        int j = 0;
        int ind = 0;
        string str = to_string(num);
        int n = str.size();
        
        while (j < n) {
            if (j - i + 1 < k) {
                j++;
            } else if (j - i + 1 == k) {
                string s = str.substr(i, k);
                int n = stoi(s);
                if (n != 0 && num % n == 0) {
                    ++ind;
                }
                i++;
                j++;
            }
        }
        return ind;
    }
};