#include <vector>
#include <algorithm>

class Solution {
public:
    int longestAlternatingSubarray(std::vector<int>& nums, int threshold) {
        int maxlen = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] % 2 == 0 && nums[i] <= threshold) {
                int len = 1;
                bool even_turn = false;
                
                for (int j = i + 1; j < n; ++j) {
                    if (nums[j] > threshold) break;
                    
                    if ((even_turn && nums[j] % 2 == 0) || (!even_turn && nums[j] % 2 != 0)) {
                        ++len;
                        even_turn = !even_turn;
                    } else {
                        break;
                    }
                }
                
                maxlen = max(maxlen,len);
            }
        }
        
        return maxlen;
    }
};
