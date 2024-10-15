class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> countMap;
        int operations = 0;

        for (int num : nums) {
            int complement = k - num;
            if (countMap[complement] > 0) {
                operations++;
                countMap[complement]--; 
            } else {
                countMap[num]++;
            }
        }

        return operations;
    }
};