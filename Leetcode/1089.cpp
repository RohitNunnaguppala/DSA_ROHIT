class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
         int n = arr.size();
        int zero = 0;

        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                zero++;
            }
        }
        
        int total = n + zero - 1;
        for (int i = n - 1; i >= 0; --i) {
            if (total < n) {
                arr[total] = arr[i];
            }
            total--;

            if (arr[i] == 0) { 
                if (total < n) {
                    arr[total] = 0;
                }
                total--;
            }
        }
    }
};