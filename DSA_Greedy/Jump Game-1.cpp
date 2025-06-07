#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxi) return false;
            maxi=max(maxi,i+nums[i]);
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,3,1,1,4};
    cout << (sol.canJump(nums) ? "true" : "false") << endl; // Output: true
    return 0;
}