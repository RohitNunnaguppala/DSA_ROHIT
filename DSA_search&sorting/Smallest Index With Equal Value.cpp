#include <bits/stdc++.h>
using namespace std;



int smallestEqual(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            if(i%10==nums[i]){
                return i;  
            }
        }
        return -1;
}

int main() {
    
    vector<int> nums1 = {0, 1, 2};
    cout << "Output: " <<smallestEqual(nums1) << endl;  // Expected: 0

    return 0;
}