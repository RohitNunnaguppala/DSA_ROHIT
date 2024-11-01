class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 
        int n = nums.size();
        int closestSum = INT_MAX;
        int minDiff = INT_MAX;

        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1, right = n - 1;
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                int diff = abs(currentSum - target);
                if (diff < minDiff) {
                    minDiff = diff;
                    closestSum = currentSum;
                }
                if (currentSum < target) {
                    ++left;
                } else if (currentSum > target) {
                    --right;
                } else {
                    return currentSum;  
                }
            }
        }
        
        return closestSum;
    }
};