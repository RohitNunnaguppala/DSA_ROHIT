#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int minPairSum(vector<int>& nums) {
            int n = nums.size();
            int maxsum = 0;
            sort(nums.begin(), nums.end());
            int l = 0, r = n - 1;
            while (l < r) {
                maxsum = max(maxsum, nums[l] + nums[r]);
                l++;
                r--;
            }
            return maxsum;
        }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 5, 2, 3};
    cout << "Minimized maximum pair sum: " << sol.minPairSum(nums) << endl;
    return 0;
}