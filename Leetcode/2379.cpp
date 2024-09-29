class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minOperations = INT_MAX, whiteCount = 0;
        for (int i = 0; i < k; ++i) {
            if (blocks[i] == 'W') {
                ++whiteCount;
            }
        }
        minOperations = whiteCount;

        for (int i = k; i < blocks.size(); ++i) {
            if (blocks[i] == 'W') {
                ++whiteCount;
            }
            if (blocks[i - k] == 'W') {
                --whiteCount;
            }
            minOperations = min(minOperations, whiteCount);
        }
        return minOperations;
    }
};