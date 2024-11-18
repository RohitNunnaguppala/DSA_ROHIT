class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> numk(nums.begin(), nums.end());
        int maxK = -1; 
        
        for (int num : nums) {
            if (num > 0 && numk.count(-num)) {
                maxK = std::max(maxK, num); 
            }
        }
        
        return maxK;
    }
};